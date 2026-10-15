/*
 * FUN_10009878 at 10009878
 * undefined FUN_10009878(void)
 * Address ranges: 10009878-10009a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1000993c) */
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_10009878(void)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar8;
  uint local_150 [2];
  undefined1 auStack_148 [264];
  
  if (DAT_100aaa6d == '\0') {
    iVar3 = (*(code *)PTR_FUN_100a8094)(s_psapi_dll_1009fb38);
    if (iVar3 != 0) {
      iVar4 = (*(code *)PTR_FUN_100a8070)(iVar3,s_EnumProcessModulesEx_1009fb48);
      if (iVar4 != 0) {
        local_150[0] = 0;
        local_150[1] = 0;
        uVar5 = (*(code *)PTR_FUN_100a804c)();
        pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(uVar5);
        iVar4 = (*extraout_w11)(uVar7,local_150 + 1,1,local_150,3);
        if (iVar4 != 0) {
          uVar1 = local_150[0] >> 2;
          iVar4 = FUN_10083400(uVar1 * 4);
          uVar5 = (*(code *)PTR_FUN_100a804c)();
          uVar7 = (*pcVar2)(uVar5);
          iVar6 = (*extraout_w11_00)(uVar7,iVar4,local_150[0],local_150,3);
          if ((iVar6 != 0) && (iVar4 != 0)) {
            uVar8 = 0;
            if (uVar1 != 0) {
              do {
                iVar6 = (*(code *)PTR_FUN_100a8064)
                                  (*(undefined4 *)(iVar4 + uVar8 * 4),auStack_148,0x104);
                if (iVar6 != 0) {
                  (*(code *)PTR_FUN_100a813c)(auStack_148);
                  iVar6 = FUN_10083580(auStack_148,&DAT_1009fb60);
                  if (iVar6 != 0) {
                    DAT_100aaa6c = 1;
                    break;
                  }
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar1);
            }
            FUN_10083420(iVar4);
          }
        }
      }
      (*(code *)PTR_FUN_100a8044)(iVar3);
    }
    DAT_100aaa6d = '\x01';
  }
  return DAT_100aaa6c;
}

