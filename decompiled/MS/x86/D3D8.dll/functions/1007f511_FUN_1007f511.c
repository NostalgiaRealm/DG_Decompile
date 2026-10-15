/*
 * FUN_1007f511 at 1007f511
 * undefined4 __stdcall FUN_1007f511(int param_1, uint * param_2)
 * Address ranges: 1007f511-1007f5da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_1007f511(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_c;
  uint *local_8;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    local_8 = &local_c;
    uVar2 = 0;
    *param_2 = *(uint *)(iVar1 + -0x58b4);
    param_2[1] = *(uint *)(iVar1 + -0x58b0);
    param_2[2] = *(uint *)(iVar1 + -0x58ac);
    param_2[3] = *(uint *)(iVar1 + -0x58a8);
    param_2[4] = *(uint *)(iVar1 + -0x58a4);
    param_2[5] = *(uint *)(iVar1 + -0x58a0);
    param_2 = &local_c;
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

