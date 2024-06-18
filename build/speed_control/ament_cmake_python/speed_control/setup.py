from setuptools import find_packages
from setuptools import setup

setup(
    name='speed_control',
    version='0.0.0',
    packages=find_packages(
        include=('speed_control', 'speed_control.*')),
)
