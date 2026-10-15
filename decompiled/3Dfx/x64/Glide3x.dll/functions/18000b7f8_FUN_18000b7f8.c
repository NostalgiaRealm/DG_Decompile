/*
 * FUN_18000b7f8 at 18000b7f8
 * undefined8 __fastcall FUN_18000b7f8(longlong param_1, uint param_2)
 * Address ranges: 18000b7f8-18000b9e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000b7f8(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *local_res18;
  undefined8 *local_res20;
  
  local_res18 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)0x0;
  uVar4 = FUN_18001161c(param_1,param_2,&local_res18,&local_res20);
  if ((char)uVar4 != '\0') {
    uVar8 = param_2 * 4 + 0x10;
    plVar5 = FUN_180048408(*(longlong *)(param_1 + 0x3330) + 0x6d0,
                           (ulonglong)*(uint *)(param_1 + 0x3338),(ulonglong)uVar8,0,'\x01');
    puVar2 = local_res20;
    puVar1 = local_res18;
    *(longlong **)(param_1 + 0x3370) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5 = FUN_180048408(*(longlong *)(param_1 + 0x3330) + 0x6d0,
                             (ulonglong)*(uint *)(param_1 + 0x3338),0x40004,0,'\x01');
      *(longlong **)(param_1 + 0x3368) = plVar5;
      if (plVar5 != (longlong *)0x0) {
        puVar6 = FUN_180044a2c(-(ulonglong)(*(longlong *)(param_1 + 0x3330) != 0) &
                               *(longlong *)(param_1 + 0x3330) + 0x6d0U,
                               *(undefined4 *)(param_1 + 0x3338),0,param_2 * 4 + 4,0);
        *(undefined8 **)(param_1 + 0x3378) = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          bVar3 = FUN_18004c098(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1518),
                                *(longlong **)(param_1 + 0x3370),
                                (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),0,uVar8,
                                puVar1,'\x01','\0');
          if ((bVar3) &&
             (bVar3 = FUN_18004c098(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1518),
                                    *(longlong **)(param_1 + 0x3368),
                                    (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),0,0x40004
                                    ,puVar2,'\x01','\0'), bVar3)) {
            FUN_180060ac0(puVar2);
            uVar7 = FUN_180060ac0(puVar1);
            return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
          puVar6 = *(undefined8 **)(param_1 + 0x3378);
          if (puVar6 != (undefined8 *)0x0) {
            FUN_180044964(puVar6);
            FUN_180060ac0(puVar6);
          }
        }
        (**(code **)(**(longlong **)(param_1 + 0x3368) + 0x10))();
      }
      (**(code **)(**(longlong **)(param_1 + 0x3370) + 0x10))();
    }
    FUN_180060ac0(puVar2);
    uVar4 = FUN_180060ac0(puVar1);
  }
  return uVar4 & 0xffffffffffffff00;
}

