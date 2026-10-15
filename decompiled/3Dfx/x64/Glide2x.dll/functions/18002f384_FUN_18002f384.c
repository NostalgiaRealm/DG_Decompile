/*
 * FUN_18002f384 at 18002f384
 * undefined8 __fastcall FUN_18002f384(longlong param_1)
 * Address ranges: 18002f384-18002f546
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002f384(longlong param_1)

{
  HMODULE pHVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  pHVar1 = DAT_18006c870;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  cVar2 = FUN_180045a0c(param_1,pHVar1,1,0x18006b428,param_1 + 0x80);
  if (cVar2 != '\0') {
    bVar7 = true;
    lVar6 = 0;
    do {
      if ((int)lVar6 != 0) break;
      puVar3 = FUN_180040c80((longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 0x19c0),
                             (&PTR_PTR_18006b430)[lVar6 * 2],(&DAT_18006b438)[lVar6 * 4]);
      bVar7 = puVar3 != (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0x88 + lVar6 * 8) = puVar3;
      lVar6 = 1;
    } while (puVar3 != (undefined8 *)0x0);
    if (bVar7) {
      lVar6 = *(longlong *)(param_1 + 0x60);
      puVar3 = FUN_180042420(-(ulonglong)(*(longlong *)(lVar6 + 0x31b0) != 0) &
                             *(longlong *)(lVar6 + 0x31b0) + 0x6d0U,*(undefined4 *)(lVar6 + 0x31b8),
                             *(longlong *)(lVar6 + 0x31c0) + 0x15b0,0xf0000,0);
      *(undefined8 **)(param_1 + 0x90) = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        lVar6 = *(longlong *)(param_1 + 0x60);
        puVar3 = FUN_180042420(-(ulonglong)(*(longlong *)(lVar6 + 0x31b0) != 0) &
                               *(longlong *)(lVar6 + 0x31b0) + 0x6d0U,
                               *(undefined4 *)(lVar6 + 0x31b8),
                               *(longlong *)(lVar6 + 0x31c0) + 0x15b0,0x10000,0);
        *(undefined8 **)(param_1 + 0x98) = puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x31c0);
          *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x31b0);
          *(undefined8 *)(param_1 + 0xb8) = uVar4;
          *(undefined1 *)(param_1 + 0xac) = 1;
          uVar4 = FUN_18002f074(param_1,1,1);
          return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        }
        puVar3 = *(undefined8 **)(param_1 + 0x90);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_180042358(puVar3);
          FUN_18005d720(puVar3);
        }
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
    }
  }
  uVar5 = FUN_18002ee20(param_1);
  return uVar5 & 0xffffffffffffff00;
}

