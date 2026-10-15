/*
 * FUN_1001ffe8 at 1001ffe8
 * undefined FUN_1001ffe8(void)
 * Address ranges: 1001ffe8-100200a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ffe8(int param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_2 + 0xb0);
  piVar2 = (int *)(param_1 + 0x138);
  if ((*plVar1 == 0) ||
     (uVar3 = FUN_10063900(*(int *)(*(int *)(*piVar2 + 0x3308) + 0x1304) + 4,0), (uVar3 & 1) == 0))
  {
    FUN_1005d768(*(undefined4 *)(*(int *)(*piVar2 + 0x3300) + 0x172c0),
                 *(undefined4 *)(param_2 + (param_3 & 0xff) * 0x20 + 0xe4));
  }
  else {
    FUN_10064050(*(undefined4 *)(*(int *)(*piVar2 + 0x3308) + 0x1304),*plVar1);
    *plVar1 = 0;
  }
  return;
}

