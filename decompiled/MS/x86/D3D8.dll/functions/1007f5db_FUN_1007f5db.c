/*
 * FUN_1007f5db at 1007f5db
 * undefined4 __stdcall FUN_1007f5db(int param_1, uint * param_2)
 * Address ranges: 1007f5db-1007f6ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_1007f5db(int param_1,uint *param_2)

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
    *param_2 = *(uint *)(iVar1 + -0x57dc);
    param_2[1] = *(uint *)(iVar1 + -0x57d8);
    param_2[2] = *(uint *)(iVar1 + -0x57d4);
    param_2[3] = *(uint *)(iVar1 + -0x57d0);
    param_2[4] = *(uint *)(iVar1 + -0x57cc);
    param_2[5] = *(uint *)(iVar1 + -0x57c8);
    param_2[6] = *(uint *)(iVar1 + -0x57c4);
    param_2[7] = *(uint *)(iVar1 + -0x57c0);
    param_2[8] = *(uint *)(iVar1 + -0x57bc);
    param_2[9] = *(uint *)(iVar1 + -0x57b8);
    param_2[10] = *(uint *)(iVar1 + -0x57b4);
    param_2[0xb] = *(uint *)(iVar1 + -0x57b0);
    param_2[0xc] = *(uint *)(iVar1 + -0x57ac);
    param_2[0xd] = *(uint *)(iVar1 + -0x57a8);
    param_2[0xe] = *(uint *)(iVar1 + -0x57a4);
    param_2[0xf] = *(uint *)(iVar1 + -0x57a0);
    uVar2 = 0;
    param_2[0x10] = *(uint *)(iVar1 + -0x579c);
    param_2 = &local_c;
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

