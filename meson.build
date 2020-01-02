project('test_project', 'cpp',
  version: '1.0.0',
  default_options: ['cpp_std=c++11'])

spdlog = subproject('spdlog')
spdlog_dep = spdlog.get_variable('spdlog_dep')

# spdlog depends on `fmt' which is not listed in its dependency
fmt = subproject('fmt')
fmt_dep = fmt.get_variable('fmt_dep')

executable('main',
  'main.cpp',
  dependencies: [spdlog_dep, fmt_dep])