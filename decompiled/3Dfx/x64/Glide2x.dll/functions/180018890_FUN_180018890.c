/*
 * FUN_180018890 at 180018890
 * undefined8 __fastcall FUN_180018890(longlong param_1, uint param_2)
 * Address ranges: 180018890-180018a7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180018890(longlong param_1,uint param_2)

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
  uVar4 = FUN_180022aec(param_1,param_2,&local_res18,&local_res20);
  if ((char)uVar4 != '\0') {
    uVar8 = param_2 * 4 + 0x10;
    plVar5 = FUN_180045dfc(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                           (ulonglong)*(uint *)(param_1 + 0x31b8),(ulonglong)uVar8,0,'\x01');
    puVar2 = local_res20;
    puVar1 = local_res18;
    *(longlong **)(param_1 + 0x31f0) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5 = FUN_180045dfc(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                             (ulonglong)*(uint *)(param_1 + 0x31b8),0x40004,0,'\x01');
      *(longlong **)(param_1 + 0x31e8) = plVar5;
      if (plVar5 != (longlong *)0x0) {
        puVar6 = FUN_180042420(-(ulonglong)(*(longlong *)(param_1 + 0x31b0) != 0) &
                               *(longlong *)(param_1 + 0x31b0) + 0x6d0U,
                               *(undefined4 *)(param_1 + 0x31b8),0,param_2 * 4 + 4,0);
        *(undefined8 **)(param_1 + 0x31f8) = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          bVar3 = FUN_180049a8c(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1518),
                                *(longlong **)(param_1 + 0x31f0),
                                (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),0,uVar8,
                                puVar1,'\x01','\0');
          if ((bVar3) &&
             (bVar3 = FUN_180049a8c(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1518),
                                    *(longlong **)(param_1 + 0x31e8),
                                    (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),0,0x40004
                                    ,puVar2,'\x01','\0'), bVar3)) {
            FUN_18005d720(puVar2);
            uVar7 = FUN_18005d720(puVar1);
            return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
          puVar6 = *(undefined8 **)(param_1 + 0x31f8);
          if (puVar6 != (undefined8 *)0x0) {
            FUN_180042358(puVar6);
            FUN_18005d720(puVar6);
          }
        }
        (**(code **)(**(longlong **)(param_1 + 0x31e8) + 0x10))();
      }
      (**(code **)(**(longlong **)(param_1 + 0x31f0) + 0x10))();
    }
    FUN_18005d720(puVar2);
    uVar4 = FUN_18005d720(puVar1);
  }
  return uVar4 & 0xffffffffffffff00;
}

