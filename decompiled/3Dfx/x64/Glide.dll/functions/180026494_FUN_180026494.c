/*
 * FUN_180026494 at 180026494
 * undefined8 __fastcall FUN_180026494(longlong param_1, uint * param_2, uint * param_3)
 * Address ranges: 180026494-180026679
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180026494(longlong param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  puVar1 = (uint *)(param_1 + 0x148);
  FUN_18005f814((undefined1 *)puVar1,0,0x450);
  lVar9 = 0;
  do {
    lVar8 = lVar9 * 0x170;
    lVar9 = lVar9 + 1;
    *(undefined8 *)(param_1 + 0x208 + lVar8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x31b0);
    *(ulonglong *)(param_1 + 0x210 + lVar8) =
         (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8) * 0x1ac0 +
         *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0) + 0x900;
    *(undefined4 *)(param_1 + 0x148 + lVar8) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x31b8);
  } while (lVar9 != 3);
  uVar4 = FUN_1800306a4(puVar1,param_2,'\0');
  if ((char)uVar4 != '\0') {
    uVar5 = FUN_1800306a4((uint *)(param_1 + 0x2b8),param_2,'\0');
    if ((char)uVar5 != '\0') {
      puVar2 = (uint *)(param_1 + 0x428);
      bVar10 = *(int *)(*(longlong *)(param_1 + 0x140) + 0xdc) == 2;
      if (bVar10) {
        param_2 = param_3;
      }
      puVar7 = puVar2;
      uVar5 = FUN_1800306a4(puVar2,param_2,bVar10);
      if ((char)uVar5 != '\0') {
        cVar3 = FUN_180045eb4(puVar7,DAT_18006c870,0x17,0x18006b3f8,param_1 + 0x598);
        if (cVar3 != '\0') {
          cVar3 = FUN_180045eb4(puVar7,DAT_18006c870,3,0x18006b3f0,param_1 + 0x650);
          if (cVar3 != '\0') {
            lVar9 = *(longlong *)(param_1 + 0x140);
            puVar6 = FUN_1800428c8(-(ulonglong)(*(longlong *)(lVar9 + 0x31b0) != 0) &
                                   *(longlong *)(lVar9 + 0x31b0) + 0x6d0U,
                                   *(undefined4 *)(lVar9 + 0x31b8),
                                   *(longlong *)(lVar9 + 0x31c0) + 0x15b0,0x4000,0);
            *(undefined8 **)(param_1 + 0x668) = puVar6;
            if (puVar6 != (undefined8 *)0x0) {
              *(undefined4 *)(param_1 + 0x670) = 0;
              DAT_18006c888 = param_1;
              return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
            }
          }
          FUN_180023f9c(param_1);
        }
        FUN_180030864((longlong)puVar2);
      }
      FUN_180030864(param_1 + 0x2b8);
    }
    uVar4 = FUN_180030864((longlong)puVar1);
  }
  return uVar4 & 0xffffffffffffff00;
}

