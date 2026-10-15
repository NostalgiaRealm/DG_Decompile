/*
 * FUN_180021d90 at 180021d90
 * undefined8 __fastcall FUN_180021d90(longlong param_1)
 * Address ranges: 180021d90-180021f9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180021d90(longlong param_1)

{
  longlong lVar1;
  HMODULE pHVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  pHVar2 = DAT_18006d9d0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  cVar3 = FUN_180048018(param_1,pHVar2,2,0x18006c2a8,param_1 + 0x2a0);
  if (cVar3 != '\0') {
    bVar7 = true;
    uVar6 = 0;
    do {
      if (1 < (uint)uVar6) break;
      puVar4 = FUN_18004328c((longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 0x19c0),
                             (&PTR_PTR_18006c2b0)[uVar6 * 2],(&DAT_18006c2b8)[uVar6 * 4]);
      bVar7 = puVar4 != (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0x2b0 + uVar6 * 8) = puVar4;
      uVar6 = (ulonglong)((uint)uVar6 + 1);
    } while (puVar4 != (undefined8 *)0x0);
    if (bVar7) {
      lVar1 = *(longlong *)(param_1 + 0x280);
      puVar4 = FUN_180044a2c(-(ulonglong)(*(longlong *)(lVar1 + 0x3330) != 0) &
                             *(longlong *)(lVar1 + 0x3330) + 0x6d0U,*(undefined4 *)(lVar1 + 0x3338),
                             *(longlong *)(lVar1 + 0x3340) + 0x15b0,0x140000,0);
      *(undefined8 **)(param_1 + 0x2c0) = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        lVar1 = *(longlong *)(param_1 + 0x280);
        puVar4 = FUN_180044a2c(-(ulonglong)(*(longlong *)(lVar1 + 0x3330) != 0) &
                               *(longlong *)(lVar1 + 0x3330) + 0x6d0U,
                               *(undefined4 *)(lVar1 + 0x3338),
                               *(longlong *)(lVar1 + 0x3340) + 0x15b0,0x10000,0);
        *(undefined8 **)(param_1 + 0x2c8) = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined4 *)(param_1 + 0x168) = 0;
          *(undefined2 *)(param_1 + 0x224) = 0;
          *(undefined1 *)(param_1 + 0x226) = 0;
          *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
          *(undefined4 *)(*(longlong *)(param_1 + 0x280) + 0x32c0) =
               *(undefined4 *)(param_1 + 0x158);
          uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x3340);
          *(undefined8 *)(param_1 + 0x2e0) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x3330);
          *(undefined8 *)(param_1 + 0x2e8) = uVar5;
          *(undefined1 *)(param_1 + 0x2dc) = 1;
          uVar5 = FUN_180021a10(param_1,1,1);
          return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
        puVar4 = *(undefined8 **)(param_1 + 0x2c0);
        if (puVar4 != (undefined8 *)0x0) {
          FUN_180044964(puVar4);
          FUN_180060ac0(puVar4);
        }
        *(undefined8 *)(param_1 + 0x2c0) = 0;
      }
    }
  }
  uVar6 = FUN_180021784(param_1);
  return uVar6 & 0xffffffffffffff00;
}

