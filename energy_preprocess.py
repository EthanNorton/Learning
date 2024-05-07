import pandas as pd
import numpy as np
from datetime import datetime, timedelta

# Define the number of data points
num_data_points = 1000

# Generate random dates
start_date = datetime(2023, 1, 1)
end_date = datetime(2024, 12, 31)
dates = pd.date_range(start_date, end_date, freq='H')[:num_data_points]

# Initialize an empty DataFrame
data = pd.DataFrame()

# Add the 'Date' column
data['Date'] = dates

# Simulate power outages based on time of day
data['Power_Outage'] = np.where((data['Date'].dt.hour >= 9) & (data['Date'].dt.hour < 18),
                                 np.random.choice([0, 1], size=num_data_points, p=[0.7, 0.3]),
                                 0)

# Simulate fluctuations in grid reliability based on weather conditions
data['Grid_Reliability'] = np.random.randint(0, 4, size=num_data_points)

# Simulate variations in energy consumption during different times of the day
data['Energy_Consumption_kWh'] = np.random.normal(loc=200, scale=50, size=num_data_points)

# Simulate temperature fluctuations throughout the day
data['Temperature_Celsius'] = np.random.normal(loc=20, scale=5, size=num_data_points)

# Simulate variations in humidity based on temperature changes
data['Humidity_Percentage'] = np.where(data['Temperature_Celsius'] > 25,
                                       np.random.normal(loc=60, scale=10, size=num_data_points),
                                       np.random.normal(loc=40, scale=10, size=num_data_points))

# Simulate fluctuations in wind speed
data['Wind_Speed_km/h'] = np.random.normal(loc=10, scale=5, size=num_data_points)

# Simulate variations in solar irradiance based on time of day
data['Solar_Irradiance_W/m2'] = np.where((data['Date'].dt.hour >= 6) & (data['Date'].dt.hour < 18),
                                         np.random.normal(loc=800, scale=200, size=num_data_points),
                                         np.random.normal(loc=200, scale=100, size=num_data_points))

# Simulate fluctuations in electricity price
data['Electricity_Price_$kWh'] = np.random.normal(loc=0.1, scale=0.05, size=num_data_points)

# Simulate changes in server utilization during peak hours
data['Server_Utilization_Percentage'] = np.where((data['Date'].dt.hour >= 9) & (data['Date'].dt.hour < 18),
                                                 np.random.normal(loc=60, scale=10, size=num_data_points),
                                                 np.random.normal(loc=30, scale=10, size=num_data_points))

# Simulate variations in network traffic
data['Network_Traffic_Mbps'] = np.random.normal(loc=100, scale=20, size=num_data_points)

# Simulate fluctuations in CPU load
data['CPU_Load_Percentage'] = np.random.normal(loc=50, scale=10, size=num_data_points)

# Simulate changes in disk usage
data['Disk_Usage_Percentage'] = np.random.normal(loc=60, scale=10, size=num_data_points)

# Simulate variations in memory usage
data['Memory_Usage_Percentage'] = np.random.normal(loc=70, scale=10, size=num_data_points)

# Simulate changes in UPS battery level
data['UPS_Battery_Level_Percentage'] = np.random.normal(loc=80, scale=10, size=num_data_points)

# Simulate fluctuations in generator fuel level
data['Generator_Fuel_Level_Percentage'] = np.random.normal(loc=70, scale=10, size=num_data_points)

# Simulate variations in UPS runtime
data['UPS_Runtime_Minutes'] = np.random.normal(loc=60, scale=10, size=num_data_points)

# Simulate changes in server temperature
data['Server_Temperature_Celsius'] = np.random.normal(loc=25, scale=5, size=num_data_points)

# Simulate fluctuations in server humidity
data['Server_Humidity_Percentage'] = np.random.normal(loc=40, scale=5, size=num_data_points)

# Simulate variations in voltage stability
data['Voltage_Stability_Score'] = np.random.randint(0, 5, size=num_data_points)

# Simulate fluctuations in frequency stability
data['Frequency_Stability_Score'] = np.random.randint(0, 5, size=num_data_points)

# Add additional context to the data for all variables

# Simulate an increase in power usage during business hours (9:00 - 18:00)
data['Energy_Consumption_kWh'] = np.where((data['Date'].dt.hour >= 9) & (data['Date'].dt.hour < 18),
                                           data['Energy_Consumption_kWh'] + np.random.normal(loc=100, scale=20, size=num_data_points),
                                           data['Energy_Consumption_kWh'])

# Simulate fluctuations in wind speed during peak hours (10:00 - 16:00)
data['Wind_Speed_km/h'] = np.where((data['Date'].dt.hour >= 10) & (data['Date'].dt.hour < 16),
                                   data['Wind_Speed_km/h'] + np.random.normal(loc=5, scale=2, size=num_data_points),
                                   data['Wind_Speed_km/h'])

# Simulate an increase in network traffic during weekdays
data['Network_Traffic_Mbps'] = np.where((data['Date'].dt.weekday < 5),
                                         data['Network_Traffic_Mbps'] + np.random.normal(loc=20, scale=5, size=num_data_points),
                                         data['Network_Traffic_Mbps'])

# Simulate spikes in CPU load during peak hours (9:00 - 18:00)
data['CPU_Load_Percentage'] = np.where((data['Date'].dt.hour >= 9) & (data['Date'].dt.hour < 18),
                                        data['CPU_Load_Percentage'] + np.random.normal(loc=10, scale=5, size=num_data_points),
                                        data['CPU_Load_Percentage'])

# Simulate variations in memory usage based on server temperature
data['Memory_Usage_Percentage'] = np.where(data['Server_Temperature_Celsius'] > 30,
                                            data['Memory_Usage_Percentage'] + np.random.normal(loc=10, scale=5, size=num_data_points),
                                            data['Memory_Usage_Percentage'])

# Simulate fluctuations in UPS battery level during weekends
data['UPS_Battery_Level_Percentage'] = np.where((data['Date'].dt.weekday >= 5),
                                                 data['UPS_Battery_Level_Percentage'] + np.random.normal(loc=-10, scale=5, size=num_data_points),
                                                 data['UPS_Battery_Level_Percentage'])

# Simulate variations in generator fuel level during grid outages (Power_Outage = 1)
data['Generator_Fuel_Level_Percentage'] = np.where(data['Power_Outage'] == 1,
                                                    data['Generator_Fuel_Level_Percentage'] - np.random.normal(loc=20, scale=5, size=num_data_points),
                                                    data['Generator_Fuel_Level_Percentage'])

# Simulate changes in UPS runtime based on server temperature
data['UPS_Runtime_Minutes'] = np.where(data['Server_Temperature_Celsius'] > 30,
                                        data['UPS_Runtime_Minutes'] - np.random.normal(loc=10, scale=5, size=num_data_points),
                                        data['UPS_Runtime_Minutes'])

# Simulate variations in server humidity during grid outages (Power_Outage = 1)
data['Server_Humidity_Percentage'] = np.where(data['Power_Outage'] == 1,
                                               data['Server_Humidity_Percentage'] - np.random.normal(loc=10, scale=5, size=num_data_points),
                                               data['Server_Humidity_Percentage'])

# Simulate fluctuations in voltage stability during high wind speeds
data['Voltage_Stability_Score'] = np.where(data['Wind_Speed_km/h'] > 20,
                                           data['Voltage_Stability_Score'] - np.random.randint(0, 3, size=num_data_points),
                                           data['Voltage_Stability_Score'])

# Simulate variations in frequency stability during power outages (Power_Outage = 1)
data['Frequency_Stability_Score'] = np.where(data['Power_Outage'] == 1,
                                             data['Frequency_Stability_Score'] - np.random.randint(0, 3, size=num_data_points),
                                             data['Frequency_Stability_Score'])

# Display the generated dataset
print(data.head())

import pandas as pd

# Assuming your dataset is stored in a DataFrame called 'data'

# Check for null values in the dataset
null_values = data.isnull().sum()

# Create a pivot table for null values
pivot_table = pd.DataFrame(null_values, columns=['Null Values'])

# Print the pivot table
print("Pivot Table for Null Values:")
print(pivot_table)

import seaborn as sns
import matplotlib.pyplot as plt

# Set the figure size
plt.figure(figsize=(12, 8))

# Plot the heatmap
sns.heatmap(correlation_matrix, annot=True, cmap='coolwarm', fmt=".2f", linewidths=.5)

# Set the title
plt.title('Correlation Matrix Heatmap')

# Show the plot
plt.show()

# Calculate Base Load
base_load = data.loc[(data['Date'].dt.hour >= 0) & (data['Date'].dt.hour < 9), 'Energy_Consumption_kWh'].mean()

# Calculate Peak Load
peak_load = data.loc[(data['Date'].dt.hour >= 9) & (data['Date'].dt.hour < 18), 'Energy_Consumption_kWh'].max()

# Display Base Load and Peak Load
print("Base Load (kWh):", base_load)
print("Peak Load (kWh):", peak_load)

# Calculate Difference between Peak and Base Load
load_difference = peak_load - base_load
print("Load Difference (kWh):", load_difference)

print(data['Date'].unique())

import matplotlib.pyplot as plt

# Convert 'Date' column to datetime format if not already
data['Date'] = pd.to_datetime(data['Date'])

# Extract hour from 'Date' column
data['Hour'] = data['Date'].dt.hour

# Group data by day and hour, calculate maximum load for each hour
peak_loads_by_hour = data.groupby([data['Date'].dt.date, data['Hour']])['Energy_Consumption_kWh'].max().reset_index()
peak_loads_by_hour = peak_loads_by_hour.pivot(index='Date', columns='Hour', values='Energy_Consumption_kWh')

# Create Heatmap
plt.figure(figsize=(12, 8))
sns.heatmap(peak_loads_by_hour, cmap='YlGnBu', linewidths=0.5)
plt.title('Peak Loads by Hour of the Day')
plt.xlabel('Hour of the Day')
plt.ylabel('Date')
plt.show()
