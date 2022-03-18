#include "aircrafts_array.h"
#include "return_codes.h"

static return_code_t aircrafts_process(void);

int main(void) { return aircrafts_process(); }

static return_code_t aircrafts_process(void) {
  aircrafts_array_t *aircrafts_array = NULL;
  return_code_t rc = read_array(stdin, stdout, &aircrafts_array);
  if (rc != OK) {
    return rc;
  }

  sort_by_flight_range(aircrafts_array);
  group_by_brand(aircrafts_array);
  print_array(aircrafts_array, stdout);
  free_array(aircrafts_array);

  return OK;
}
