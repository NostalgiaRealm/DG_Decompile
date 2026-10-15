/*
 * FUN_180016c2c at 180016c2c
 * undefined __fastcall FUN_180016c2c(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, undefined8 * param_9)
 * Address ranges: 180016c2c-180016ea1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016c2c(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8,undefined8 *param_9)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      uVar10 = param_3 & 0xfffffff8;
      if (uVar10 < *(uint *)(*(longlong *)(param_1 + 0x30) + 0x82f)) {
        if ((param_6 < 9) && ((byte)(&DAT_180062c08)[(int)param_6] < 9)) {
          if ((param_5 < 9) &&
             ((((byte)(&DAT_180062c08)[(int)param_5] < 9 && (param_8 < 0x10)) && (param_7 < 7)))) {
            uVar4 = FUN_1800178d8(param_4,param_5,param_6,param_7,param_8);
            if (uVar4 != 0) {
              if (param_4 == 3) {
                lVar2 = *(longlong *)(param_1 + 0x18);
                lVar9 = (longlong)param_2 * 0x4e8;
                uVar6 = *(uint *)(lVar9 + 700 + lVar2);
                uVar5 = uVar6 - uVar10;
                if (uVar4 + uVar10 <= uVar6) {
                  uVar5 = uVar4;
                }
                puVar8 = (undefined8 *)
                         ((ulonglong)(*(int *)(lVar9 + 0x2b8 + lVar2) + uVar10) +
                         *(longlong *)(lVar2 + 0x2b0));
                FUN_18005ed10(puVar8,param_9,(ulonglong)uVar5);
                plVar3 = *(longlong **)(param_1 + 0x18);
                (**(code **)(*plVar3 + 0x250))
                          (plVar3,puVar8,(int)plVar3[(longlong)param_2 * 0x9d + 0x57] + uVar10,uVar5
                          );
              }
              else {
                for (uVar4 = (uint)(byte)(&DAT_180062c08)[(int)param_6];
                    (int)(uint)(byte)(&DAT_180062c08)[(int)param_5] <= (int)uVar4; uVar4 = uVar4 - 1
                    ) {
                  uVar6 = FUN_1800178d8(3,*(int *)(&DAT_180060888 + (longlong)(int)uVar4 * 4),
                                        *(int *)(&DAT_180060888 + (longlong)(int)uVar4 * 4),param_7,
                                        param_8);
                  bVar7 = 0xff;
                  if (uVar4 < 9) {
                    bVar7 = (&DAT_180062c08)[(int)uVar4];
                  }
                  uVar5 = uVar6;
                  if ((bool)(bVar7 & 1) == (param_4 != 1)) {
                    lVar2 = *(longlong *)(param_1 + 0x18);
                    lVar9 = (longlong)param_2 * 0x4e8;
                    uVar1 = *(uint *)(lVar9 + 700 + lVar2);
                    uVar5 = uVar1 - uVar10;
                    if (uVar6 + uVar10 <= uVar1) {
                      uVar5 = uVar6;
                    }
                    puVar8 = (undefined8 *)
                             ((ulonglong)(*(int *)(lVar9 + 0x2b8 + lVar2) + uVar10) +
                             *(longlong *)(lVar2 + 0x2b0));
                    FUN_18005ed10(puVar8,param_9,(ulonglong)uVar5);
                    plVar3 = *(longlong **)(param_1 + 0x18);
                    (**(code **)(*plVar3 + 0x250))
                              (plVar3,puVar8,(int)plVar3[(longlong)param_2 * 0x9d + 0x57] + uVar10,
                               uVar5);
                    uVar10 = uVar10 + uVar5;
                  }
                  param_9 = (undefined8 *)((longlong)param_9 + (ulonglong)uVar5);
                }
              }
            }
          }
        }
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

