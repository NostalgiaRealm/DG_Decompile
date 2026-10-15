/*
 * FUN_180039678 at 180039678
 * undefined __cdecl FUN_180039678(longlong * param_1, uint param_2, uint param_3)
 * Address ranges: 180039678-180039763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039678(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0x2a0))();
  if (param_2 == 0) {
    uVar1 = 0x30;
    if (*(char *)((longlong)param_1 + 0x317b) == '\0') {
      uVar1 = 0;
    }
    uVar2 = 0xc;
    if (*(char *)((longlong)param_1 + 0x317a) == '\0') {
      uVar2 = 0;
    }
    uVar3 = 3;
    if (*(char *)((longlong)param_1 + 0x3179) == '\0') {
      uVar3 = 0;
    }
    uVar4 = uVar1 | uVar2 | uVar3;
    if (((uVar4 & 5) == 5) && ((param_3 & 0x10) == 0)) {
      uVar4 = uVar1 | uVar2 & 0xfffffffb | uVar3;
    }
    if ((((uVar4 & 5) != 0) && ((uVar4 >> 4 & 1) != 0)) && ((param_3 >> 6 & 1) == 0)) {
      uVar4 = uVar4 & 0xffffffef;
    }
    if (((uVar4 >> 1 & 1) != 0) && ((param_3 & 2) == 0)) {
      uVar4 = uVar4 & 0xfffffffd;
    }
    if (((uVar4 >> 3 & 1) != 0) && ((param_3 & 8) == 0)) {
      uVar4 = uVar4 & 0xfffffff7;
    }
    if ((uVar4 >> 5 != 0) && ((param_3 & 0x20) == 0)) {
      uVar4 = uVar4 & 0xffffffdf;
    }
    *(uint *)((longlong)param_1 + 0x2bfc) = uVar4;
    *(undefined1 *)(param_1 + 0x62e) = 1;
  }
  *(uint *)((longlong)param_1 + (ulonglong)param_2 * 4 + 0x29b4) = param_3;
  return;
}

