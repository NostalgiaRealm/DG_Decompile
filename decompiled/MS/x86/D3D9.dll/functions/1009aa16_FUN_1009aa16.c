/*
 * FUN_1009aa16 at 1009aa16
 * undefined4 __stdcall FUN_1009aa16(int param_1, uint * param_2)
 * Address ranges: 1009aa16-1009aadf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_1009aa16(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_c;
  uint *local_8;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar2 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    local_8 = &local_c;
    uVar2 = 0;
    *param_2 = *(uint *)(iVar1 + -0x6688);
    param_2[1] = *(uint *)(iVar1 + -0x6684);
    param_2[2] = *(uint *)(iVar1 + -0x6680);
    param_2[3] = *(uint *)(iVar1 + -0x667c);
    param_2[4] = *(uint *)(iVar1 + -0x6678);
    param_2[5] = *(uint *)(iVar1 + -0x6674);
    param_2 = &local_c;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

