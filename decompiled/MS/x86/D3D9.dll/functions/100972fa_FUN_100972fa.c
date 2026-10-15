/*
 * FUN_100972fa at 100972fa
 * undefined4 __stdcall FUN_100972fa(int param_1, uint * param_2)
 * Address ranges: 100972fa-10097410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100972fa(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  iVar1 = param_1;
  uVar5 = 0x8876086c;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  puVar2 = param_2;
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar4 = FUN_1009c1d2((void *)(iVar1 + 0x78),(uint *)&param_2);
  if (*(char *)(iVar1 + -0x62f0) == '\0') {
    cVar3 = FUN_100968e7((void *)(iVar1 + -0x66b4),(int)puVar2,iVar4);
    uVar5 = 0;
    if (cVar3 == '\0') {
      uVar5 = 0x8876086c;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + -0x6300) + *(int *)(iVar1 + -0x62f4) * 4);
    if (puVar2 == (uint *)0x0) {
      if (*(undefined4 **)(iVar1 + 0x4f98) != (undefined4 *)0x0) {
        FUN_1009e840(*(undefined4 **)(iVar1 + 0x4f98));
      }
      uVar5 = 0;
      *(undefined1 *)(iVar1 + 0xac1d) = 1;
      *(undefined4 *)(iVar1 + 0x4f98) = 0;
    }
    else if (iVar4 != 0) {
      LOCK();
      puVar2[2] = puVar2[2] + 1;
      UNLOCK();
      if (*(undefined4 **)(iVar1 + 0x4f98) != (undefined4 *)0x0) {
        FUN_1009e840(*(undefined4 **)(iVar1 + 0x4f98));
      }
      *(uint **)(iVar1 + 0x4f98) = puVar2;
      uVar5 = 0;
      *(undefined1 *)(iVar1 + 0xac1d) = 1;
    }
  }
  param_2 = &local_10;
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar5;
}

