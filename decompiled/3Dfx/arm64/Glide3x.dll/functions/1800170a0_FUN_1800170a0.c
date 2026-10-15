/*
 * FUN_1800170a0 at 1800170a0
 * undefined __cdecl FUN_1800170a0(longlong * param_1, uint param_2, uint param_3, int param_4, byte param_5)
 * Address ranges: 1800170a0-1800171bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800170a0(longlong *param_1,uint param_2,uint param_3,int param_4,byte param_5)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = 3;
  do {
    lVar3 = (**(code **)(*param_1 + 0x58))(param_1,uVar4);
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((param_2 < uVar1 && param_3 <= uVar1) ||
       (bVar2 = false, *(uint *)(lVar3 + 0x1c) <= param_2 && *(uint *)(lVar3 + 0x1c) < param_3)) {
      bVar2 = true;
    }
    if (((*(uint *)(lVar3 + 0x1c) != uVar1 && !bVar2) &&
        (((param_2 != uVar1 || param_3 != *(uint *)(lVar3 + 0x1c) ||
          (param_4 != *(int *)(lVar3 + 0x14) || param_5 == 0)) && (*(int *)(lVar3 + 0x74) == 0))))
       && (*(int *)(lVar3 + 0x78) == 0)) {
      if ((*(byte *)(lVar3 + 0x4a) >> 1 & 1) != 0) {
        (**(code **)(*param_1 + 0x40))(param_1,uVar4,1,0);
        FUN_18002df68((longlong *)param_1[1],uVar4);
      }
      if ((param_5 & 1) != 0) {
        (**(code **)(*param_1 + 0x68))(param_1,uVar4);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = 0;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  return;
}

