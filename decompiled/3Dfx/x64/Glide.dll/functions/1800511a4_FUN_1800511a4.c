/*
 * FUN_1800511a4 at 1800511a4
 * undefined8 __fastcall FUN_1800511a4(LPVOID param_1, uint param_2)
 * Address ranges: 1800511a4-1800514ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800511a4(LPVOID param_1,uint param_2)

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
  if ((DAT_18006cb00 & 1) == 0) {
    DAT_18006cb00 = DAT_18006cb00 | 1;
    _DAT_18006c980 = 2;
    _DAT_18006c984 = local_64;
    _DAT_18006c990 = local_58;
    _DAT_18006c99c = local_4c;
    _DAT_18006c9a4 = local_64;
    _DAT_18006c9ac = local_5c;
    _DAT_18006c9b0 = &DAT_18006c7b0;
    _DAT_18006c9bc = local_4c;
    _DAT_18006c9c4 = local_64;
    _DAT_18006c9d0 = local_58;
    _DAT_18006c9dc = local_4c;
    _DAT_18006c9e4 = local_64;
    _DAT_18006c9f0 = local_58;
    _DAT_18006c9fc = local_4c;
    _DAT_18006c988 = 2;
    _DAT_18006c998 = 0;
    _DAT_18006c9a0 = 0;
    _DAT_18006c9a8 = 1;
    _DAT_18006c9b8 = 5;
    _DAT_18006c9c0 = 3;
    _DAT_18006c9c8 = 1;
    _DAT_18006c9d8 = 5;
    _DAT_18006c9e0 = 3;
    _DAT_18006c9e8 = 2;
    _DAT_18006c9f8 = 5;
  }
  lVar4 = (**(code **)(*(longlong *)((longlong)param_1 + 0x6b0) + 8))
                    ((longlong *)((longlong)param_1 + 0x6b0),uVar7,1,&DAT_18006c788,0);
  *(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) = lVar4;
  uVar8 = 0;
  if (lVar4 != 0) {
    pvVar6 = param_1;
    lVar4 = FUN_180051578((longlong)param_1,(ulonglong)param_2);
    *(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) = lVar4;
    if (lVar4 != 0) {
      lVar4 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1b98;
      cVar3 = FUN_180045eb4(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),2,0x18006c488,lVar4);
      if (cVar3 != '\0') {
        lVar1 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1a40;
        cVar3 = FUN_180045eb4(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),0x2b,0x18006c490,lVar1)
        ;
        if (cVar3 != '\0') {
          lVar2 = (longlong)param_1 + uVar7 * 0x1ac0 + 0x1a20;
          cVar3 = FUN_180045eb4(pvVar6,*(HMODULE *)((longlong)param_1 + 0x298),4,0x18006c4e8,lVar2);
          if (cVar3 != '\0') {
            pvVar6 = (LPVOID)0x10;
            puVar5 = (undefined8 *)FUN_18005db9c(0x10);
            *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1bb0) = puVar5;
            *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = &PTR_s_POSITION_1800645bf_1_18006c768;
              *(undefined4 *)(*(longlong *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) + 8) = 1;
              uVar8 = -(ulonglong)(param_1 != (LPVOID)0x0) & (longlong)param_1 + 0x6d0U;
              puVar5 = FUN_1800428c8(uVar8,param_2,(longlong)param_1 + uVar7 * 0x1ac0 + 0x1e20,
                                     0x1040,0);
              *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910) = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                puVar5 = FUN_1800428c8(uVar8,param_2,(longlong)param_1 + uVar7 * 0x1ac0 + 0x1eb0,
                                       0x200,-(ulonglong)(param_1 != (LPVOID)0x0) &
                                             (longlong)param_1 + 0x6a8U);
                *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x908) = puVar5;
                if (puVar5 != (undefined8 *)0x0) {
                  return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
                }
                puVar5 = *(undefined8 **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910);
                if (puVar5 != (undefined8 *)0x0) {
                  FUN_180042800(puVar5);
                  FUN_18005dbc0(puVar5);
                }
                *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x910) = 0;
              }
              pvVar6 = *(LPVOID *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8);
              FUN_18005dbc0(pvVar6);
              *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1bb0) = 0;
              *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x1ba8) = 0;
            }
            FUN_180045fa0(pvVar6,4,lVar2);
          }
          FUN_180045fa0(pvVar6,0x2b,lVar1);
        }
        FUN_180045fa0(pvVar6,2,lVar4);
      }
      (**(code **)(**(longlong **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) + 0x10))();
      *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x9b8) = 0;
    }
    uVar8 = (**(code **)(**(longlong **)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) + 0x10))();
    *(undefined8 *)((longlong)param_1 + uVar7 * 0x1ac0 + 0x918) = 0;
  }
  return uVar8 & 0xffffffffffffff00;
}

