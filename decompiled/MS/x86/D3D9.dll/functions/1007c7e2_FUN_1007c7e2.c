/*
 * FUN_1007c7e2 at 1007c7e2
 * undefined4 __fastcall FUN_1007c7e2(int * param_1)
 * Address ranges: 1007c7e2-1007c86b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1007c7e2(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = FUN_100ba45e((void *)(param_1[0x73c0] + 0x520),(int *)param_1[5],0x40000,0,1);
  param_1[0x73c2] = (int)piVar1;
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_1008d289(param_1);
    if ((char)uVar2 != '\0') {
      FUN_100baf7e(*(void **)(param_1[0x73c1] + 0x130c),(uint)param_1[0x73c2],0,1,0);
      uVar2 = FUN_100bad40((void *)(*(int *)(param_1[0x73c1] + 0x130c) + 4),'\0');
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    uVar2 = FUN_100cfd6c((LPVOID)param_1[0x73c2]);
    param_1[0x73c2] = 0;
  }
  return uVar2 & 0xffffff00;
}

