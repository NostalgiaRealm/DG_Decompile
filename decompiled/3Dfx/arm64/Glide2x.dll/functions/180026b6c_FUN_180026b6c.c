/*
 * FUN_180026b6c at 180026b6c
 * undefined8 __cdecl FUN_180026b6c(longlong param_1, uint * param_2, uint * param_3)
 * Address ranges: 180026b6c-180026da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180026b6c(longlong param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_180060360((undefined1 *)(param_1 + 0x148),0,0x450);
  lVar6 = 0;
  do {
    lVar8 = lVar6 * 0x170;
    lVar6 = lVar6 + 1;
    *(undefined8 *)(param_1 + 0x208 + lVar8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x31b0);
    *(ulonglong *)(param_1 + 0x210 + lVar8) =
         *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0) +
         (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8) * 0x1ac0 + 0x900;
    *(undefined4 *)(param_1 + lVar8 + 0x148) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x31b8);
  } while (lVar6 != 3);
  uVar3 = FUN_1800328e0((uint *)(param_1 + 0x148),param_2,0);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_1800328e0((uint *)(param_1 + 0x2b8),param_2,0);
    if ((uVar3 & 1) != 0) {
      bVar1 = *(int *)(*(longlong *)(param_1 + 0x140) + 0xdc) == 2;
      if (!bVar1) {
        param_3 = param_2;
      }
      uVar3 = FUN_1800328e0((uint *)(param_1 + 0x428),param_3,bVar1);
      if ((uVar3 & 1) != 0) {
        lVar6 = param_1 + 0x598;
        uVar2 = FUN_180048dd8(uVar3,DAT_18006b860,0x17,0x18006a3d0,lVar6);
        if ((uVar2 & 1) != 0) {
          lVar8 = param_1 + 0x650;
          uVar2 = FUN_180048dd8((ulonglong)uVar2,DAT_18006b860,3,0x18006a3c0,lVar8);
          if ((uVar2 & 1) == 0) {
            lVar9 = 0;
            do {
              FUN_180044888((longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19d8),
                            *(longlong *)(lVar8 + lVar9 * 8));
              lVar9 = lVar9 + 1;
            } while (lVar9 != 3);
            lVar9 = 0;
            do {
              uVar4 = FUN_180044888((longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19d8
                                    ),*(longlong *)(lVar6 + lVar9 * 8));
              lVar9 = lVar9 + 1;
            } while (lVar9 != 0x17);
          }
          else {
            lVar7 = *(longlong *)(param_1 + 0x140);
            lVar9 = 0;
            if (*(longlong *)(lVar7 + 0x31b0) != 0) {
              lVar9 = *(longlong *)(lVar7 + 0x31b0) + 0x6d0;
            }
            puVar5 = FUN_180044ff8(lVar9,*(undefined4 *)(lVar7 + 0x31b8),
                                   *(longlong *)(lVar7 + 0x31c0) + 0x15b0,0x4000,0);
            *(undefined8 **)(param_1 + 0x668) = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              *(undefined4 *)(param_1 + 0x670) = 0;
              DAT_18006b878 = param_1;
              return 1;
            }
            lVar9 = 0;
            do {
              FUN_180044888((longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19d8),
                            *(longlong *)(lVar8 + lVar9 * 8));
              lVar9 = lVar9 + 1;
            } while (lVar9 != 3);
            lVar9 = 0;
            do {
              uVar4 = FUN_180044888((longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19d8
                                    ),*(longlong *)(lVar6 + lVar9 * 8));
              lVar9 = lVar9 + 1;
            } while (lVar9 != 0x17);
          }
          uVar4 = FUN_180048f30(uVar4,3,lVar8);
          FUN_180048f30(uVar4,0x17,lVar6);
        }
        FUN_180032c30(param_1 + 0x428);
      }
      FUN_180032c30(param_1 + 0x2b8);
    }
    FUN_180032c30(param_1 + 0x148);
  }
  return 0;
}

