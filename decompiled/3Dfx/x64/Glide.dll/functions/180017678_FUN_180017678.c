/*
 * FUN_180017678 at 180017678
 * undefined __fastcall FUN_180017678(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, undefined8 * param_9, int param_10, int param_11)
 * Address ranges: 180017678-18001787e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017678(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8,undefined8 *param_9,int param_10,int param_11)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (((((param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) && (param_10 <= param_11)) &&
         (-1 < param_10)) && ((param_5 < 9 && ((byte)(&DAT_180062c08)[(int)param_5] < 9)))) &&
       ((param_4 < 9 && (bVar1 = (&DAT_180062c08)[(int)param_4], bVar1 < 9)))) {
      if ((param_7 < 0x10) && (param_6 < 7)) {
        if ((param_8 == 3) || ((bVar1 & 1) == (uint)(param_8 != 1))) {
          uVar6 = param_3 & 0xfffffff8;
          for (uVar8 = (uint)(byte)(&DAT_180062c08)[(int)param_5]; (int)(uint)bVar1 < (int)uVar8;
              uVar8 = uVar8 - 1) {
            iVar3 = FUN_180017d78(param_8,*(int *)(&DAT_180060888 + (longlong)(int)uVar8 * 4),
                                  *(int *)(&DAT_180060888 + (longlong)(int)uVar8 * 4),param_6,
                                  param_7);
            uVar6 = uVar6 + iVar3;
          }
          lVar2 = *(longlong *)(param_1 + 0x18);
          uVar8 = *(uint *)((longlong)param_2 * 0x4e8 + 700 + lVar2);
          if (uVar6 < uVar8) {
            uVar5 = (uint)(byte)(&DAT_180062bb8)[(int)param_7];
            uVar4 = FUN_180017d28(param_4,param_6);
            iVar3 = (uVar4 >> 0x10) * uVar5;
            uVar5 = ((param_11 - param_10) + 1) * iVar3;
            uVar4 = uVar8 - uVar6;
            if (uVar5 + uVar6 <= uVar8) {
              uVar4 = uVar5;
            }
            uVar6 = *(int *)((longlong)param_2 * 0x4e8 + 0x2b8 + lVar2) + iVar3 * param_10 + uVar6;
            puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x2b0) + (ulonglong)uVar6);
            FUN_18005f1b0(puVar7,param_9,(ulonglong)uVar4);
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x250))
                      (*(longlong **)(param_1 + 0x18),puVar7,uVar6,uVar4);
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

