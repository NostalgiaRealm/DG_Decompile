/*
 * FUN_1001a590 at 1001a590
 * undefined FUN_1001a590(void)
 * Address ranges: 1001a590-1001a5f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001a590(undefined8 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  
  bVar1 = false;
  switch(param_3) {
  case 0:
    bVar1 = param_2 == 0 || param_2 == 0xc;
    break;
  case 1:
    bVar1 = param_2 == 1 || param_2 == 0xd;
    break;
  case 2:
    bVar1 = param_2 == 2 || param_2 == 0xe;
    break;
  case 3:
  case 4:
  case 5:
    bVar1 = false;
    break;
  case 6:
    bVar1 = param_2 == 5;
    break;
  case 7:
    bVar1 = param_2 == 0xf;
  }
  return bVar1;
}

