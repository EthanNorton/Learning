import pytest
from math_functions import add, subtract

def test_add():
    assert add(2, 3) == 5, "Should be 5"

def test_subtract():
    assert subtract(5, 2) == 3, "Should be 3"
