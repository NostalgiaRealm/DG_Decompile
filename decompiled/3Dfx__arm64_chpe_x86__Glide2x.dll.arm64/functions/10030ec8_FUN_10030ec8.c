/*
 * FUN_10030ec8 at 10030ec8
 * undefined FUN_10030ec8(void)
 * Address ranges: 10030ec8-10030f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030ec8(int param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_2 + 0xb0);
  piVar2 = (int *)(param_1 + 0x138);
  if ((*plVar1 == 0) ||
     (uVar3 = FUN_1005fc70(*(int *)(*(int *)(*piVar2 + 0x3188) + 0x1304) + 4,0), (uVar3 & 1) == 0))
  {
    FUN_10059ad8(*(undefined4 *)(*(int *)(*piVar2 + 0x3180) + 0x172c0),
                 *(undefined4 *)(param_2 + (param_3 & 0xff) * 0x20 + 0xe4));
  }
  else {
    FUN_100603c0(*(undefined4 *)(*(int *)(*piVar2 + 0x3188) + 0x1304),*plVar1);
    *plVar1 = 0;
  }
  return;
}

