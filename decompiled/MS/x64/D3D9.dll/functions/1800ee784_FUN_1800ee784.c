/*
 * FUN_1800ee784 at 1800ee784
 * undefined8 __fastcall FUN_1800ee784(undefined1 * param_1, uint param_2)
 * Address ranges: 1800ee784-1800eeac4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800ee784(undefined1 *param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  uVar5 = (ulonglong)param_2;
  if ((DAT_1801176c4 & 1) == 0) {
    DAT_1801176c4 = DAT_1801176c4 | 1;
    _DAT_180117630 = 2;
    _DAT_180117634 = local_64;
    _DAT_180117640 = local_58;
    _DAT_18011764c = local_4c;
    _DAT_180117654 = local_64;
    _DAT_18011765c = local_5c;
    _DAT_180117660 = &DAT_180111e28;
    _DAT_18011766c = local_4c;
    _DAT_180117674 = local_64;
    _DAT_180117680 = local_58;
    _DAT_18011768c = local_4c;
    _DAT_180117694 = local_64;
    _DAT_1801176a0 = local_58;
    _DAT_1801176ac = local_4c;
    _DAT_180117638 = 2;
    _DAT_180117648 = 0;
    _DAT_180117650 = 0;
    _DAT_180117658 = 1;
    _DAT_180117668 = 5;
    _DAT_180117670 = 3;
    _DAT_180117678 = 1;
    _DAT_180117688 = 5;
    _DAT_180117690 = 3;
    _DAT_180117698 = 2;
    _DAT_1801176a8 = 5;
  }
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x6b0) + 8))
                    (param_1 + 0x6b0,uVar5,1,&DAT_180111e00,0);
  *(longlong *)(param_1 + uVar5 * 0x1ac0 + 0x918) = lVar2;
  uVar6 = 0;
  if (lVar2 != 0) {
    puVar4 = param_1;
    lVar2 = FUN_1800eeb30((longlong)param_1,(ulonglong)param_2);
    *(longlong *)(param_1 + uVar5 * 0x1ac0 + 0x9b8) = lVar2;
    if (lVar2 != 0) {
      cVar1 = FUN_1800e6384(puVar4,*(HMODULE *)(param_1 + 0x298),2,0x180110788,
                            (longlong)(param_1 + uVar5 * 0x1ac0 + 0x1b98));
      if (cVar1 != '\0') {
        cVar1 = FUN_1800e6384(puVar4,*(HMODULE *)(param_1 + 0x298),0x2b,0x180110790,
                              (longlong)(param_1 + uVar5 * 0x1ac0 + 0x1a40));
        if (cVar1 != '\0') {
          cVar1 = FUN_1800e6384(puVar4,*(HMODULE *)(param_1 + 0x298),4,0x1801107e8,
                                (longlong)(param_1 + uVar5 * 0x1ac0 + 0x1a20));
          if (cVar1 != '\0') {
            puVar4 = &DAT_00000010;
            puVar3 = (undefined8 *)FUN_1800fbccc(0x10);
            *(undefined8 **)(param_1 + uVar5 * 0x1ac0 + 0x1bb0) = puVar3;
            *(undefined8 **)(param_1 + uVar5 * 0x1ac0 + 0x1ba8) = puVar3;
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = &PTR_s_POSITION_180111de0;
              *(undefined4 *)(*(longlong *)(param_1 + uVar5 * 0x1ac0 + 0x1ba8) + 8) = 1;
              uVar6 = -(ulonglong)(param_1 != (undefined1 *)0x0) & (ulonglong)(param_1 + 0x6d0);
              puVar3 = FUN_1800e8040(uVar6,param_2,param_1 + uVar5 * 0x1ac0 + 0x1e20,0x1040,0);
              *(undefined8 **)(param_1 + uVar5 * 0x1ac0 + 0x910) = puVar3;
              if (puVar3 != (undefined8 *)0x0) {
                puVar3 = FUN_1800e8040(uVar6,param_2,param_1 + uVar5 * 0x1ac0 + 0x1eb0,0x200,
                                       -(ulonglong)(param_1 != (undefined1 *)0x0) &
                                       (ulonglong)(param_1 + 0x6a8));
                *(undefined8 **)(param_1 + uVar5 * 0x1ac0 + 0x908) = puVar3;
                if (puVar3 != (undefined8 *)0x0) {
                  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
                }
                if (*(undefined8 **)(param_1 + uVar5 * 0x1ac0 + 0x910) != (undefined8 *)0x0) {
                  FUN_1800428b0(*(undefined8 **)(param_1 + uVar5 * 0x1ac0 + 0x910),1);
                }
                *(undefined8 *)(param_1 + uVar5 * 0x1ac0 + 0x910) = 0;
              }
              puVar4 = *(undefined1 **)(param_1 + uVar5 * 0x1ac0 + 0x1ba8);
              FUN_1800fbcf0(puVar4);
              *(undefined8 *)(param_1 + uVar5 * 0x1ac0 + 0x1bb0) = 0;
              *(undefined8 *)(param_1 + uVar5 * 0x1ac0 + 0x1ba8) = 0;
            }
            FUN_1800e6470(puVar4,4,(longlong)(param_1 + uVar5 * 0x1ac0 + 0x1a20));
          }
          FUN_1800e6470(puVar4,0x2b,(longlong)(param_1 + uVar5 * 0x1ac0 + 0x1a40));
        }
        FUN_1800e6470(puVar4,2,(longlong)(param_1 + uVar5 * 0x1ac0 + 0x1b98));
      }
      (**(code **)(**(longlong **)(param_1 + uVar5 * 0x1ac0 + 0x9b8) + 0x10))();
      *(undefined8 *)(param_1 + uVar5 * 0x1ac0 + 0x9b8) = 0;
    }
    uVar6 = (**(code **)(**(longlong **)(param_1 + uVar5 * 0x1ac0 + 0x918) + 0x10))();
    *(undefined8 *)(param_1 + uVar5 * 0x1ac0 + 0x918) = 0;
  }
  return uVar6 & 0xffffffffffffff00;
}

