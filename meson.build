project(
  'tecnica-de-desenvolvimento-de-algoritimo-udf',
  'cpp',
  version : '0.1',
  meson_version : '>= 1.3.0',
  default_options : ['warning_level=3', 'cpp_std=c++23'],
)

dependencies = [
]

ex01 = executable(
  'ex01',
  'ex01/main.cpp',
  install : true,
  dependencies : dependencies,
)

ex02 = executable(
  'ex02',
  'ex02/main.cpp',
  install : true,
  dependencies : dependencies,
)

test('ex01', ex01)
test('ex02', ex02)
