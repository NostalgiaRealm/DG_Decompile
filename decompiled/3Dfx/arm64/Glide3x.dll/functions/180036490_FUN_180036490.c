/*
 * FUN_180036490 at 180036490
 * undefined __cdecl FUN_180036490(longlong param_1, int * param_2, longlong * param_3, ulonglong param_4, char param_5)
 * Address ranges: 180036490-180036623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036490(longlong param_1,int *param_2,longlong *param_3,ulonglong param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort local_50 [8];
  
  bVar5 = param_5 == '\0';
  lVar2 = 0xf0;
  if (bVar5) {
    lVar2 = 0xb8;
  }
  lVar6 = (param_4 & 0xffffffff) * 8 - (param_4 & 0xffffffff);
  lVar8 = 0;
  local_50[0] = ((ushort *)(lVar2 + (longlong)param_2))[lVar6];
  lVar3 = 0xf2;
  if (bVar5) {
    lVar3 = 0xba;
  }
  local_50[1] = *(undefined2 *)((longlong)param_2 + lVar6 * 2 + lVar3);
  lVar3 = 0xf4;
  if (bVar5) {
    lVar3 = 0xbc;
  }
  local_50[2] = *(undefined2 *)((longlong)param_2 + lVar6 * 2 + lVar3);
  lVar3 = 0xf6;
  if (bVar5) {
    lVar3 = 0xbe;
  }
  local_50[3] = *(undefined2 *)((longlong)param_2 + lVar6 * 2 + lVar3);
  do {
    uVar1 = local_50[lVar8] & 0xf0;
    if (uVar1 != 0x40 && (uVar1 + 0xfff0 & 0xffcf) == 0) {
      uVar1 = local_50[lVar8] & 0xf;
      uVar7 = (ulonglong)uVar1;
      if ((((param_2[uVar7 + 0x1d] == 0) && (param_2[uVar7 + 0x20] == 0)) &&
          (param_2[uVar7 + 0x23] == 0)) &&
         ((cVar4 = *(char *)((longlong)param_2 + uVar7 + 0xad),
          FUN_180031ee0(param_1,uVar1,param_2,param_3,
                        *(char *)((longlong)param_2 + uVar7 + 0xb0) != -1,
                        *(char *)((longlong)param_2 + uVar7 + 0xb3) != -1,cVar4 != -1), cVar4 != -1
          && (*(int *)(param_1 + 0x17c + uVar7 * 0x1a0) != 0)))) {
        FUN_180034b70((ushort *)(lVar2 + (longlong)param_2),uVar1 | 0x2010,uVar1 | 0x2010,0,
                      uVar1 * 0x1a0 + 0x160,uVar1 * 0x1a0 + 0x170,param_2,param_3);
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  return;
}

