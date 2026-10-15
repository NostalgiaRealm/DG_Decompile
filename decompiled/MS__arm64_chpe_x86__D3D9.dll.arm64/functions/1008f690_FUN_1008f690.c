/*
 * FUN_1008f690 at 1008f690
 * undefined FUN_1008f690(void)
 * Address ranges: 1008f690-1008f7ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008f690(undefined8 param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar4 = FUN_10122ff8(param_2,*(undefined4 *)(param_3 + 0x18));
  puVar1 = (uint *)(param_3 + 0x520);
  *puVar1 = (uint)*(undefined8 *)(param_3 + 0x510) >> 0xc & 0xf;
  uVar6 = FUN_101325d0(param_3 + 0x534,0,0x300);
  uVar5 = *(int *)(param_3 + 0x51c) << 2;
  if (uVar5 != 0) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = 0x400 / uVar5;
    }
    uVar6 = FUN_1008f5b0(uVar6,uVar9,*puVar1,param_3 + *puVar1 * 0x60 + 0x4d4);
    puVar2 = (uint *)(param_3 + 0x524);
    uVar5 = (uint)uVar6;
    *(uint *)(param_3 + 0x528) = uVar5;
    *puVar2 = 0;
    if (uVar5 != 0) {
      uVar9 = 0;
      uVar10 = 0;
      do {
        uVar3 = *(uint *)(param_3 + 0x4dc + (uVar9 + *puVar1 * 6) * 0x10);
        if (uVar10 < uVar3) {
          *puVar2 = uVar3;
          uVar10 = uVar3;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
    }
    uVar5 = (uint)*(undefined8 *)(param_3 + 0x510) >> 0xb & 1;
    *(char *)(param_3 + 0x52d) = (char)uVar5;
    if ((uVar5 != 0) && (uVar5 = 1, 1 < *puVar1)) {
      uVar8 = (ulonglong)(param_3 + 0x4d4);
      uVar7 = ZEXT48(puVar2);
      do {
        uVar6 = FUN_1008f5b0(uVar6,*(undefined4 *)uVar7,uVar5,(int)uVar8 + uVar5 * 0x60);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar1);
    }
    FUN_101232a8(*(undefined4 *)(param_3 + 0x18),param_2,0);
    return uVar4;
  }
                    /* WARNING: Does not return */
  uVar6 = SoftwareBreakpoint(0xf004,0x1008f70c);
  (*(code *)uVar6)();
}

