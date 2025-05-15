from setuptools import find_packages
from setuptools import setup

setup(
    name='training_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('training_interfaces', 'training_interfaces.*')),
)
