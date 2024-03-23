# Download FindFortran.cmake

set(dest_file "${CMAKE_CURRENT_BINARY_DIR}/FindFortran.cmake")
set(expected_hash "fcb5e593ae9aea43697a7f02d6a0e08707b52ed71430ee7837ff11d5ed48e40f")
set(url "https://raw.githubusercontent.com/scikit-build/cmake-FindFortran/v0.5.3/FindFortran.cmake")
if(NOT EXISTS ${dest_file})
  file(DOWNLOAD ${url} ${dest_file} EXPECTED_HASH SHA256=${expected_hash})
else()
  file(SHA256 ${dest_file} current_hash)
  if(NOT ${current_hash} STREQUAL ${expected_hash})
    file(DOWNLOAD ${url} ${dest_file} EXPECTED_HASH SHA256=${expected_hash})
  endif()
endif()
