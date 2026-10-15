/*
 * FUN_1000f9fd at 1000f9fd
 * undefined4 __fastcall FUN_1000f9fd(int * param_1)
 * Address ranges: 1000f9fd-1000fa86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000f9fd(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = FUN_1004b606((void *)(param_1[0x33c0] + 0x520),(int *)param_1[5],0x40000,0,1);
  param_1[0x33c2] = (int)piVar1;
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_100200ed(param_1);
    if ((char)uVar2 != '\0') {
      FUN_10052bd4(*(void **)(param_1[0x33c1] + 0x130c),(uint)param_1[0x33c2],0,1,0);
      uVar2 = FUN_10052996((void *)(*(int *)(param_1[0x33c1] + 0x130c) + 4),'\0');
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    uVar2 = FUN_10060be1((LPVOID)param_1[0x33c2]);
    param_1[0x33c2] = 0;
  }
  return uVar2 & 0xffffff00;
}

