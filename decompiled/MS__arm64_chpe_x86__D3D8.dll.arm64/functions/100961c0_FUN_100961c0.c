/*
 * FUN_100961c0 at 100961c0
 * undefined FUN_100961c0(void)
 * Address ranges: 100961c0-100961f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100961c0(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = true;
  }
  else {
    piVar1 = (int *)&DAT_00000138;
    if (param_3 != 0) {
      piVar1 = (int *)(param_3 + 0x78);
    }
    bVar2 = *(int *)(param_2 + 0x78) == *piVar1;
  }
  return bVar2;
}

