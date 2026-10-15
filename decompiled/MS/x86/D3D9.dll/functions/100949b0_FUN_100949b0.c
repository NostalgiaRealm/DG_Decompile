/*
 * FUN_100949b0 at 100949b0
 * undefined4 __stdcall FUN_100949b0(int param_1, uint * param_2)
 * Address ranges: 100949b0-10094a38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100949b0(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if (*(char *)(iVar1 + -0x62f0) == '\0') {
    *(uint *)(iVar1 + -0x6688) = *param_2;
    *(uint *)(iVar1 + -0x6684) = param_2[1];
    *(uint *)(iVar1 + -0x6680) = param_2[2];
    *(uint *)(iVar1 + -0x667c) = param_2[3];
    *(uint *)(iVar1 + -0x6678) = param_2[4];
    *(uint *)(iVar1 + -0x6674) = param_2[5];
    *(undefined1 *)(iVar1 + 0x5c3b) = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10007d49((void *)(iVar1 + -0x66b4),param_2);
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

