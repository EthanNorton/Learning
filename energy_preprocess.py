import pandas as pd
import numpy as np

# Generate synthetic data
np.random.seed(0)
num_samples = 100
temperature = np.random.randint(15, 35, num_samples)  # Random temperatures between 15°C and 35°C
humidity = np.random.randint(30, 70, num_samples)     # Random humidity between 30% and 70%
energy_consumption = 50 + (temperature - 20) * 2 + (humidity - 50) * 1.5 + np.random.normal(0, 10, num_samples)

# Creating DataFrame
data = {
    'Temperature': temperature,
    'Humidity': humidity,
    'Energy_Consumption': energy_consumption
}
df = pd.DataFrame(data)

import sklearn
from sklearn.model_selection import train_test_split

# Splitting data into features (X) and target variable (y)
X = df[['Temperature', 'Humidity']]  # Features
y = df['Energy_Consumption']         # Target variable

# Splitting data into train and test sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error

# Creating linear regression model
model = LinearRegression()

# Training the model
model.fit(X_train, y_train)

# Making predictions
y_pred = model.predict(X_test)

# Evaluating the model
mse = mean_squared_error(y_test, y_pred)
print('Mean Squared Error:', mse)

# Example prediction
temperature = 30
humidity = 45
predicted_energy_consumption = model.predict([[temperature, humidity]])
print('Predicted Energy Consumption:', predicted_energy_consumption[0])

# Evaluating the model
mse = mean_squared_error(y_test, y_pred)
print('Mean Squared Error:', mse)

# Example prediction
temperature = 30
humidity = 45
predicted_energy_consumption = model.predict([[temperature, humidity]])
print('Predicted Energy Consumption:', predicted_energy_consumption[0])
