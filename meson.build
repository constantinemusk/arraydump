project(
    'arraydump',
    'cpp',
    default_options: [
        'warning_level=3',
        'werror=true',
        'cpp_std=c++23',
        'buildtype=debug'
    ],
    license: 'Apache-2.0',
    version: '1.0',
    meson_version: '>=1.1.1',
)

add_project_arguments('-Werror=unused-variable', language: 'cpp')
add_project_arguments('-Wno-error=array-bounds', language: 'cpp')

# Если в вашем main.cpp появятся зависимости вроде sdbusplus или phosphor-logging, 
# просто раскомментируйте этот блок и добавьте 'dependencies: deps' в executable ниже.
# deps = [
#     dependency('phosphor-logging'),
#     dependency('sdbusplus'),
#     dependency('systemd'),
# ]

executable(
    'arraydump',
    'main.cpp',
    implicit_include_directories: false,
    # dependencies: deps,
    install: true,
    install_dir: get_option('bindir')
)
