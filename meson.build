project(
  'tecnica-de-desenvolvimento-de-algoritimo-udf',
  'cpp',
  version: '0.1',
  meson_version: '>= 1.3.0',
  default_options: ['warning_level=3', 'cpp_std=c++23'],
)

dependencies = []

foreach i : range(1,6)
  exe = executable(
    'list0_ex@0@'.format(i.to_string(fill: 2)),
    'list0/ex@0@/main.cpp'.format(i.to_string(fill: 2)),
    install: true,
    dependencies: dependencies,
  )
  test('list0_ex@0@'.format(i.to_string(fill: 2)), exe)
endforeach

list0_ch01 = executable(
  'list0_ch01',
  'list0/ch01/main.cpp',
  install: true,
  dependencies: dependencies,
)
test('list0_ch01', list0_ch01)

foreach i : range(1,17)
  exe = executable(
    'list1_ex@0@'.format(i.to_string(fill: 2)),
    'list1/ex@0@/main.cpp'.format(i.to_string(fill: 2)),
    install: true,
    dependencies: dependencies,
  )
  test('list1_ex@0@'.format(i.to_string(fill: 2)), exe)
endforeach

foreach i : range(1,15)
  exe = executable(
    'list2_ex@0@'.format(i.to_string(fill: 2)),
    'list2/ex@0@/main.cpp'.format(i.to_string(fill: 2)),
    install: true,
    dependencies: dependencies,
  )
  test('list2_ex@0@'.format(i.to_string(fill: 2)), exe)
endforeach

foreach i : range(1,17)
  exe = executable(
    'list3_ex@0@'.format(i.to_string(fill: 2)),
    'list3/ex@0@/main.cpp'.format(i.to_string(fill: 2)),
    install: true,
    dependencies: dependencies,
  )
  test('list3_ex@0@'.format(i.to_string(fill: 2)), exe)
endforeach
