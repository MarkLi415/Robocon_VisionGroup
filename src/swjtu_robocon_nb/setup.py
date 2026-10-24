from setuptools import find_packages, setup

package_name = 'swjtu_robocon_nb'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mark-li',
    maintainer_email='mark-li@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'stu_info_pub = swjtu_robocon_nb.stu_info_pub:main',
            'stu_info_sub = swjtu_robocon_nb.stu_info_sub:main',
        ],
    },
)
