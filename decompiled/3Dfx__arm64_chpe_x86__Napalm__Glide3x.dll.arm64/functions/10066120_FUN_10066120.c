/*
 * FUN_10066120 at 10066120
 * undefined FUN_10066120(void)
 * Address ranges: 10066120-100663af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10066120(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar4 = FUN_10083310(0x17344);
  puVar1 = (undefined4 *)(iVar4 + 0x43U & 0xffffffc0);
  puVar1[-1] = iVar4;
  FUN_10073aa8(puVar1,param_1,&PTR_s_DGD3D12ROOT_100a92d8);
  puVar6 = puVar1 + 0x148;
  iVar4 = 0x10;
  do {
    *puVar6 = 0;
    puVar6[2] = 0xc000;
    puVar6[4] = 0;
    *(undefined1 *)((int)puVar6 + 0x15) = 0;
    iVar4 = iVar4 + -1;
    puVar6 = puVar6 + 6;
  } while (iVar4 != 0);
  puVar1[0x1a8] = 0;
  puVar1[0x144] = puVar1;
  puVar1[0x147] = 0;
  *puVar1 = &PTR_FUN_1009f2e8;
  *(undefined8 *)(puVar1 + 0x145) = 0;
  puVar6 = puVar1 + 0x1b0;
  puVar1[0x142] = &PTR_FUN_1009f3c4;
  puVar1[0x143] = &PTR_FUN_1009f330;
  iVar4 = 0x10;
  do {
    iVar4 = iVar4 + -1;
    FUN_100635f0(puVar6);
    puVar6 = puVar6 + 0x5b0;
  } while (iVar4 != 0);
  uVar5 = FUN_10061ee0();
  puVar1[0x5cb0] = uVar5;
  cVar3 = FUN_10071550(puVar1);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (cVar3 != '\0') {
    iVar4 = (*(code *)PTR_FUN_100a8070)(puVar1[0xae],s_D3D12SerializeRootSignature_100a1af8);
    puVar1[0x1a8] = iVar4;
    if (iVar4 != 0) {
      *(undefined1 *)((int)puVar1 + 0x2d6) = 0;
      if (param_2 != (int *)0x0) {
        FUN_10083420(puVar1[0x145]);
        *(undefined8 *)(puVar1 + 0x145) = 0;
        puVar1[0x147] = 0;
        uVar7 = 0;
        if (param_2[1] != 0) {
          do {
            FUN_1004ca40(puVar1 + 0x145,*param_2 + uVar7 * 4);
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)param_2[1]);
        }
      }
      cVar3 = '\x01';
      uVar7 = 0;
      if (puVar1[0x146] == 0) {
        return puVar1;
      }
      do {
        if (cVar3 == '\0') goto LAB_10066358;
        uVar5 = (*pcVar2)();
        cVar3 = (*extraout_w11)(uVar5,*extraout_w8,puVar1 + 0x143);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)puVar1[0x146]);
      if (cVar3 != '\0') {
        return puVar1;
      }
    }
LAB_10066358:
    FUN_10071a88(puVar1);
  }
  (*pcVar2)();
  (*extraout_w11_00)(puVar1,0);
  FUN_10083bb0(puVar1[-1]);
  return (undefined4 *)0x0;
}

