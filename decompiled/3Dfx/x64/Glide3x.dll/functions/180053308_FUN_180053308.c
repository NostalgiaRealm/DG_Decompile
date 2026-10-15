/*
 * FUN_180053308 at 180053308
 * undefined8 __fastcall FUN_180053308(LPVOID param_1, uint param_2)
 * Address ranges: 180053308-180053653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180053308(LPVOID param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  uVar7 = (ulonglong)param_2;
  if ((DAT_18006dc68 & 1) == 0) {
    DAT_18006dc68 = DAT_18006dc68 | 1;
    _DAT_18006db10 = 2;
    _DAT_18006db14 = local_64;
    _DAT_18006db20 = local_58;
    _DAT_18006db2c = local_4c;
    _DAT_18006db34 = local_64;
    _DAT_18006db3c = local_5c;
    _DAT_18006db40 = &DAT_18006d908;
    _DAT_18006db4c = local_4c;
    _DAT_18006db54 = local_64;
    _DAT_18006db60 = local_58;
    _DAT_18006db6c = local_4c;
    _DAT_18006db74 = local_64;
    _DAT_18006db80 = local_58;
    _DAT_18006db8c = local_4c;
    _DAT_18006db18 = 2;
    _DAT_18006db28 = 0;
    _DAT_18006db30 = 0;
    _DAT_18006db38 = 1;
    _DAT_18006db48 = 5;
    _DAT_18006db50 = 3;
    _DAT_18006db58 = 1;
    _DAT_18006db68 = 5;
    _DAT_18006db70 = 3;
    _DAT_18006db78 = 2;
    _DAT_18006db88 = 5;
  }
  lVar4 = (**(code **)(*(longlong *)((longlong)param_1 + 0x6b0) + 8))
                    ((longlong *)((longlong)param_1 + 0x6b0),uVar7,1,&DAT_18006d8e0,0);
  *(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) = lVar4;
  uVar8 = 0;
  if (lVar4 != 0) {
    pvVar6 = param_1;
    lVar4 = FUN_1800536dc((longlong)param_1,(ulonglong)param_2);
    *(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) = lVar4;
    if (lVar4 != 0) {
      lVar4 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1b98;
      cVar3 = FUN_180048018(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),2,0x18006d5c8,lVar4);
      if (cVar3 != '\0') {
        lVar1 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1a40;
        cVar3 = FUN_180048018(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),0x2b,0x18006d5d0,lVar1)
        ;
        if (cVar3 != '\0') {
          lVar2 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1a20;
          cVar3 = FUN_180048018(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),4,0x18006d628,lVar2);
          if (cVar3 != '\0') {
            pvVar6 = (LPVOID)0x10;
            puVar5 = (undefined8 *)FUN_180060a9c(0x10);
            *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1bb0) = puVar5;
            *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = &PTR_s_POSITION_18006684f_1_18006d8c0;
              *(undefined4 *)(*(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) + 8) = 1;
              uVar8 = -(ulonglong)(param_1 != (LPVOID)0x0) & (longlong)param_1 + 0x6d0U;
              puVar5 = FUN_180044a2c(uVar8,param_2,(longlong)param_1 + uVar7 * 0x1ac0 + 0x1e20,
                                     0x1040,0);
              *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910) = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                puVar5 = FUN_180044a2c(uVar8,param_2,(longlong)param_1 + uVar7 * 0x1ac0 + 0x1eb0,
                                       0x200,-(ulonglong)(param_1 != (LPVOID)0x0) &
                                             (longlong)param_1 + 0x6a8U);
                *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x908) = puVar5;
                if (puVar5 != (undefined8 *)0x0) {
                  return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
                }
                puVar5 = *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910);
                if (puVar5 != (undefined8 *)0x0) {
                  FUN_180044964(puVar5);
                  FUN_180060ac0(puVar5);
                }
                *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910) = 0;
              }
              pvVar6 = *(LPVOID *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8);
              FUN_180060ac0(pvVar6);
              *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1bb0) = 0;
              *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) = 0;
            }
            FUN_180048104(pvVar6,4,lVar2);
          }
          FUN_180048104(pvVar6,0x2b,lVar1);
        }
        FUN_180048104(pvVar6,2,lVar4);
      }
      (**(code **)(**(longlong **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) + 0x10))();
      *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) = 0;
    }
    uVar8 = (**(code **)(**(longlong **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) + 0x10))();
    *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) = 0;
  }
  return uVar8 & 0xffffffffffffff00;
}

