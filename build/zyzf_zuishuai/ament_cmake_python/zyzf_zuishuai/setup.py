from setuptools import find_packages
from setuptools import setup

setup(
    name='zyzf_zuishuai',
    version='0.0.0',
    packages=find_packages(
        include=('zyzf_zuishuai', 'zyzf_zuishuai.*')),
)
