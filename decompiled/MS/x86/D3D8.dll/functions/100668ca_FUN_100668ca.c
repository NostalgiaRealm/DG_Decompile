/*
 * FUN_100668ca at 100668ca
 * undefined4 __fastcall FUN_100668ca(int * param_1)
 * Address ranges: 100668ca-10066953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100668ca(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = FUN_10097e82((void *)(param_1[0x73c0] + 0x520),(int *)param_1[5],0x40000,0,1);
  param_1[0x73c2] = (int)piVar1;
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_100770d9(param_1);
    if ((char)uVar2 != '\0') {
      FUN_100989a6(*(void **)(param_1[0x73c1] + 0x130c),(uint)param_1[0x73c2],0,1,0);
      uVar2 = FUN_10098768((void *)(*(int *)(param_1[0x73c1] + 0x130c) + 4),'\0');
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    uVar2 = FUN_100ad48c((LPVOID)param_1[0x73c2]);
    param_1[0x73c2] = 0;
  }
  return uVar2 & 0xffffff00;
}

