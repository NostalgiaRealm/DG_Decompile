/*
 * FUN_1800086bc at 1800086bc
 * undefined __fastcall FUN_1800086bc(longlong param_1, int param_2, uint param_3, uint param_4, int param_5, uint param_6, int param_7, uint param_8, undefined8 * param_9)
 * Address ranges: 1800086bc-1800088e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800086bc(longlong param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6,
                  int param_7,uint param_8,undefined8 *param_9)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      uVar8 = param_3 & 0xfffffff8;
      if ((((uVar8 < *(uint *)(*(longlong *)(param_1 + 0x30) + 0x82f)) && ((int)param_6 < 9)) &&
          (param_5 < 9)) && ((param_8 < 0x10 && (param_7 + 3U < 7)))) {
        uVar3 = FUN_180005928(param_4,param_5,param_6,param_7,param_8);
        if (uVar3 != 0) {
          if (param_4 == 3) {
            lVar1 = *(longlong *)(param_1 + 0x18);
            lVar7 = (longlong)param_2 * 0x4e8;
            uVar5 = *(uint *)(lVar7 + 0x334 + lVar1);
            uVar4 = uVar5 - uVar8;
            if (uVar3 + uVar8 <= uVar5) {
              uVar4 = uVar3;
            }
            puVar6 = (undefined8 *)
                     ((ulonglong)(*(int *)(lVar7 + 0x330 + lVar1) + uVar8) +
                     *(longlong *)(lVar1 + 0x328));
            FUN_180061330(puVar6,param_9,(ulonglong)uVar4);
            plVar2 = *(longlong **)(param_1 + 0x18);
            (**(code **)(*plVar2 + 0x290))
                      (plVar2,puVar6,(int)plVar2[(longlong)param_2 * 0x9d + 0x66] + uVar8,uVar4);
          }
          else if (param_5 <= (int)param_6) {
            do {
              uVar5 = FUN_180005928(3,param_6,param_6,param_7,param_8);
              uVar3 = uVar5;
              if ((param_6 & 1) == (uint)(param_4 != 1)) {
                lVar1 = *(longlong *)(param_1 + 0x18);
                lVar7 = (longlong)param_2 * 0x4e8;
                uVar4 = *(uint *)(lVar7 + 0x334 + lVar1);
                uVar3 = uVar4 - uVar8;
                if (uVar5 + uVar8 <= uVar4) {
                  uVar3 = uVar5;
                }
                puVar6 = (undefined8 *)
                         ((ulonglong)(*(int *)(lVar7 + 0x330 + lVar1) + uVar8) +
                         *(longlong *)(lVar1 + 0x328));
                FUN_180061330(puVar6,param_9,(ulonglong)uVar3);
                plVar2 = *(longlong **)(param_1 + 0x18);
                (**(code **)(*plVar2 + 0x290))
                          (plVar2,puVar6,(int)plVar2[(longlong)param_2 * 0x9d + 0x66] + uVar8,uVar3)
                ;
                uVar8 = uVar8 + uVar3;
              }
              param_6 = param_6 - 1;
              param_9 = (undefined8 *)((longlong)param_9 + (ulonglong)uVar3);
            } while (param_5 <= (int)param_6);
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

