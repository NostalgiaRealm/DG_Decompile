/*
 * FUN_180006494 at 180006494
 * int __fastcall FUN_180006494(WNDPROC param_1, int * param_2, uint * param_3)
 * Address ranges: 180006494-1800066a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180006494(WNDPROC param_1,int *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_68;
  int local_64;
  int local_58;
  
  iVar8 = 0;
  cVar1 = FUN_180006b64(param_1);
  iVar9 = iVar8;
  if (cVar1 != '\0') {
    if (((*param_2 == 0x7fff7fff) && (param_2[1] == 0x7fff7fff)) &&
       (uVar2 = FUN_1800079d4(param_1), uVar2 == 4)) {
      uVar3 = FUN_180006c18((longlong)param_1);
      iVar9 = 0;
      if ((char)uVar3 != '\0') {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa0))
                          (*(longlong **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x24),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x818));
        uVar10 = 0;
        if (uVar2 != 0) {
          do {
            uVar5 = 2;
            do {
              uVar4 = 0;
              do {
                if (param_3 != (uint *)0x0) {
                  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa8))
                            (*(longlong **)(param_1 + 0x28),&local_68,
                             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x818),uVar10);
                  *param_3 = local_64 << 0x10 | local_68;
                  param_3[1] = local_58 << 0x10;
                  param_3[2] = uVar5;
                  param_3[3] = uVar4;
                  param_3 = param_3 + 4;
                }
                iVar8 = iVar8 + 0x10;
                uVar4 = uVar4 + 1;
              } while (uVar4 <= (uVar5 == 2));
              uVar5 = uVar5 + 1;
            } while (uVar5 < 4);
            uVar10 = uVar10 + 1;
            iVar9 = iVar8;
          } while (uVar10 < uVar2);
        }
      }
    }
    else {
      lVar6 = 0;
      do {
        iVar9 = *param_2;
        if (((iVar9 == -1) || (iVar9 == 0xff)) || (iVar9 == (&DAT_180063920)[lVar6])) {
          lVar7 = 0;
          do {
            iVar9 = param_2[1];
            if (((iVar9 == -1) || (iVar9 == 0xff)) || (iVar9 == (&DAT_1800638f0)[lVar7])) {
              uVar2 = 2;
              do {
                if ((param_2[2] == -1) || (param_2[2] == uVar2)) {
                  uVar10 = 0;
                  do {
                    if (((param_2[3] == -1) || (param_2[3] == uVar10)) &&
                       ((uint)(ushort)(&DAT_1800638b2)[lVar6 * 2] *
                        (uint)(ushort)(&DAT_1800638b0)[lVar6 * 2] * (uVar10 + uVar2) * 2 <=
                        *(uint *)(*(longlong *)(param_1 + 0x30) + 0x82b))) {
                      if (param_3 != (uint *)0x0) {
                        *param_3 = (&DAT_180063920)[lVar6];
                        param_3[1] = (&DAT_1800638f0)[lVar7];
                        param_3[2] = uVar2;
                        param_3[3] = uVar10;
                        param_3 = param_3 + 4;
                      }
                      iVar8 = iVar8 + 0x10;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 <= (uVar2 == 2));
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < 4);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 9);
        }
        lVar6 = lVar6 + 1;
        iVar9 = iVar8;
      } while (lVar6 != 0x10);
    }
  }
  return iVar9;
}

