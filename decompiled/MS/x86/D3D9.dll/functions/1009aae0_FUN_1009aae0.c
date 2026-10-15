/*
 * FUN_1009aae0 at 1009aae0
 * undefined4 __stdcall FUN_1009aae0(int param_1, uint * param_2)
 * Address ranges: 1009aae0-1009abb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_1009aae0(int param_1,uint *param_2)

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
    *param_2 = *(uint *)(iVar1 + -0x640c);
    param_2[1] = *(uint *)(iVar1 + -0x6408);
    param_2[2] = *(uint *)(iVar1 + -0x6404);
    param_2[3] = *(uint *)(iVar1 + -0x6400);
    param_2[4] = *(uint *)(iVar1 + -0x63fc);
    param_2[5] = *(uint *)(iVar1 + -0x63f8);
    param_2[6] = *(uint *)(iVar1 + -0x63f4);
    param_2[7] = *(uint *)(iVar1 + -0x63f0);
    param_2[8] = *(uint *)(iVar1 + -0x63ec);
    param_2[9] = *(uint *)(iVar1 + -0x63e8);
    param_2[10] = *(uint *)(iVar1 + -0x63e4);
    param_2[0xb] = *(uint *)(iVar1 + -0x63e0);
    param_2[0xc] = *(uint *)(iVar1 + -0x63dc);
    param_2[0xd] = *(uint *)(iVar1 + -0x63d8);
    param_2[0xe] = *(uint *)(iVar1 + -0x63d4);
    param_2[0xf] = *(uint *)(iVar1 + -0x63d0);
    uVar2 = 0;
    param_2[0x10] = *(uint *)(iVar1 + -0x63cc);
    param_2 = &local_c;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

