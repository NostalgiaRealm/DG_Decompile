/*
 * FUN_101190b0 at 101190b0
 * undefined FUN_101190b0(void)
 * Address ranges: 101190b0-1011933f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_101190b0(undefined4 param_1,int *param_2)

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
  
  iVar4 = FUN_101321c0(0x17344);
  puVar1 = (undefined4 *)(iVar4 + 0x43U & 0xffffffc0);
  puVar1[-1] = iVar4;
  FUN_1010f568(puVar1,param_1,&PTR_s_DGD3D12ROOT_1016d170);
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
  *puVar1 = &PTR_FUN_10160210;
  *(undefined8 *)(puVar1 + 0x145) = 0;
  puVar6 = puVar1 + 0x1b0;
  puVar1[0x142] = &PTR_FUN_101602ec;
  puVar1[0x143] = &PTR_FUN_10160258;
  iVar4 = 0x10;
  do {
    iVar4 = iVar4 + -1;
    FUN_10125810(puVar6);
    puVar6 = puVar6 + 0x5b0;
  } while (iVar4 != 0);
  uVar5 = FUN_1011e210();
  puVar1[0x5cb0] = uVar5;
  cVar3 = FUN_1010cf60(puVar1);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (cVar3 != '\0') {
    iVar4 = (*(code *)PTR_FUN_1016c0a0)(puVar1[0xae],s_D3D12SerializeRootSignature_101659c8);
    puVar1[0x1a8] = iVar4;
    if (iVar4 != 0) {
      *(undefined1 *)((int)puVar1 + 0x2d6) = 0;
      if (param_2 != (int *)0x0) {
        FUN_101322d0(puVar1[0x145]);
        *(undefined8 *)(puVar1 + 0x145) = 0;
        puVar1[0x147] = 0;
        uVar7 = 0;
        if (param_2[1] != 0) {
          do {
            FUN_10024e68(puVar1 + 0x145,*param_2 + uVar7 * 4);
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
        if (cVar3 == '\0') goto LAB_101192e8;
        uVar5 = (*pcVar2)();
        cVar3 = (*extraout_w11)(uVar5,*extraout_w8,puVar1 + 0x143);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)puVar1[0x146]);
      if (cVar3 != '\0') {
        return puVar1;
      }
    }
LAB_101192e8:
    FUN_1010d498(puVar1);
  }
  (*pcVar2)();
  (*extraout_w11_00)(puVar1,0);
  FUN_10132440(puVar1[-1]);
  return (undefined4 *)0x0;
}

