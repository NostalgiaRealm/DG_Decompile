/*
 * FUN_180050cfc at 180050cfc
 * undefined8 __fastcall FUN_180050cfc(LPVOID param_1, uint param_2)
 * Address ranges: 180050cfc-180051047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180050cfc(LPVOID param_1,uint param_2)

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
  if ((DAT_18006cab0 & 1) == 0) {
    DAT_18006cab0 = DAT_18006cab0 | 1;
    _DAT_18006c930 = 2;
    _DAT_18006c934 = local_64;
    _DAT_18006c940 = local_58;
    _DAT_18006c94c = local_4c;
    _DAT_18006c954 = local_64;
    _DAT_18006c95c = local_5c;
    _DAT_18006c960 = &DAT_18006c7b0;
    _DAT_18006c96c = local_4c;
    _DAT_18006c974 = local_64;
    _DAT_18006c980 = local_58;
    _DAT_18006c98c = local_4c;
    _DAT_18006c994 = local_64;
    _DAT_18006c9a0 = local_58;
    _DAT_18006c9ac = local_4c;
    _DAT_18006c938 = 2;
    _DAT_18006c948 = 0;
    _DAT_18006c950 = 0;
    _DAT_18006c958 = 1;
    _DAT_18006c968 = 5;
    _DAT_18006c970 = 3;
    _DAT_18006c978 = 1;
    _DAT_18006c988 = 5;
    _DAT_18006c990 = 3;
    _DAT_18006c998 = 2;
    _DAT_18006c9a8 = 5;
  }
  lVar4 = (**(code **)(*(longlong *)((longlong)param_1 + 0x6b0) + 8))
                    ((longlong *)((longlong)param_1 + 0x6b0),uVar7,1,&DAT_18006c788,0);
  *(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) = lVar4;
  uVar8 = 0;
  if (lVar4 != 0) {
    pvVar6 = param_1;
    lVar4 = FUN_1800510d0((longlong)param_1,(ulonglong)param_2);
    *(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) = lVar4;
    if (lVar4 != 0) {
      lVar4 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1b98;
      cVar3 = FUN_180045a0c(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),2,0x18006c488,lVar4);
      if (cVar3 != '\0') {
        lVar1 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1a40;
        cVar3 = FUN_180045a0c(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),0x2b,0x18006c490,lVar1)
        ;
        if (cVar3 != '\0') {
          lVar2 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1a20;
          cVar3 = FUN_180045a0c(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),4,0x18006c4e8,lVar2);
          if (cVar3 != '\0') {
            pvVar6 = (LPVOID)0x10;
            puVar5 = (undefined8 *)FUN_18005d6fc(0x10);
            *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1bb0) = puVar5;
            *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = &PTR_s_POSITION_1800645bf_1_18006c768;
              *(undefined4 *)(*(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) + 8) = 1;
              uVar8 = -(ulonglong)(param_1 != (LPVOID)0x0) & (longlong)param_1 + 0x6d0U;
              puVar5 = FUN_180042420(uVar8,param_2,(longlong)param_1 + uVar7 * 0x1ac0 + 0x1e20,
                                     0x1040,0);
              *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910) = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                puVar5 = FUN_180042420(uVar8,param_2,(longlong)param_1 + uVar7 * 0x1ac0 + 0x1eb0,
                                       0x200,-(ulonglong)(param_1 != (LPVOID)0x0) &
                                             (longlong)param_1 + 0x6a8U);
                *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x908) = puVar5;
                if (puVar5 != (undefined8 *)0x0) {
                  return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
                }
                puVar5 = *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910);
                if (puVar5 != (undefined8 *)0x0) {
                  FUN_180042358(puVar5);
                  FUN_18005d720(puVar5);
                }
                *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910) = 0;
              }
              pvVar6 = *(LPVOID *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8);
              FUN_18005d720(pvVar6);
              *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1bb0) = 0;
              *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) = 0;
            }
            FUN_180045af8(pvVar6,4,lVar2);
          }
          FUN_180045af8(pvVar6,0x2b,lVar1);
        }
        FUN_180045af8(pvVar6,2,lVar4);
      }
      (**(code **)(**(longlong **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) + 0x10))();
      *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) = 0;
    }
    uVar8 = (**(code **)(**(longlong **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) + 0x10))();
    *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) = 0;
  }
  return uVar8 & 0xffffffffffffff00;
}

