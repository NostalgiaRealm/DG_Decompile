/*
 * FUN_18003ff1c at 18003ff1c
 * undefined8 __fastcall FUN_18003ff1c(longlong param_1)
 * Address ranges: 18003ff1c-18004000f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18003ff1c(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = FUN_1800de604(DAT_1801123b0,&PTR_s_DGD3D12ROOT_180110758,0);
  *(longlong *)(param_1 + 0x188) = lVar2;
  uVar5 = 0;
  if (lVar2 != 0) {
    lVar6 = (ulonglong)*(uint *)(param_1 + 400) * 0x1ac0;
    *(longlong *)(param_1 + 0x198) = lVar6 + 0x900 + lVar2;
    FUN_1800fb1f0(lVar6 + 0x1bc0 + lVar2);
    uVar3 = FUN_18003f688(param_1);
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_18003f9a4(param_1);
      if ((char)uVar3 != '\0') {
        puVar4 = (undefined8 *)FUN_1800fbccc(0x10);
        *(undefined8 **)(param_1 + 0x158) = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_s_POSITION_180111c30;
          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 8) = 2;
          bVar1 = FUN_18003fb20(param_1);
          if (bVar1) {
            return CONCAT71(extraout_var,1);
          }
          FUN_18003fab8(param_1);
        }
        FUN_18003fa68(param_1);
      }
      FUN_18003f8fc(param_1);
    }
    uVar5 = FUN_1800de65c(*(longlong **)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return uVar5 & 0xffffffffffffff00;
}

