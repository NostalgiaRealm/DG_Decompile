/*
 * FUN_180041e60 at 180041e60
 * undefined __cdecl FUN_180041e60(longlong param_1, int * param_2, longlong * param_3, ulonglong param_4, char param_5)
 * Address ranges: 180041e60-180041fa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180041e60(longlong param_1,int *param_2,longlong *param_3,ulonglong param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ushort local_60 [8];
  
  lVar5 = (param_4 & 0xffffffff) * 8 - (param_4 & 0xffffffff);
  bVar3 = param_5 == '\0';
  lVar2 = 0xf0;
  if (bVar3) {
    lVar2 = 0xb8;
  }
  lVar6 = 0;
  local_60[0] = *(ushort *)((longlong)param_2 + lVar5 * 2 + lVar2);
  lVar2 = 0xf2;
  if (bVar3) {
    lVar2 = 0xba;
  }
  local_60[1] = *(undefined2 *)((longlong)param_2 + lVar5 * 2 + lVar2);
  lVar2 = 0xf4;
  if (bVar3) {
    lVar2 = 0xbc;
  }
  local_60[2] = *(undefined2 *)((longlong)param_2 + lVar5 * 2 + lVar2);
  lVar2 = 0xf6;
  if (bVar3) {
    lVar2 = 0xbe;
  }
  local_60[3] = *(undefined2 *)((longlong)param_2 + lVar5 * 2 + lVar2);
  do {
    uVar1 = local_60[lVar6] & 0xf0;
    if (uVar1 != 0x40 && (uVar1 + 0xfff0 & 0xffcf) == 0) {
      uVar1 = local_60[lVar6] & 0xf;
      uVar4 = (ulonglong)uVar1;
      if (((param_2[uVar4 + 0x1d] == 0) && (param_2[uVar4 + 0x20] == 0)) &&
         (param_2[uVar4 + 0x23] == 0)) {
        FUN_18003dcf8(param_1,uVar1,param_2,param_3,
                      *(char *)((longlong)param_2 + uVar4 + 0xb0) != -1,
                      *(char *)((longlong)param_2 + uVar4 + 0xb3) != -1,
                      *(char *)((longlong)param_2 + uVar4 + 0xad) != -1);
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  return;
}

