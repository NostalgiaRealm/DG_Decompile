/*
 * FUN_10004501 at 10004501
 * int __fastcall FUN_10004501(int param_1)
 * Address ranges: 10004501-1000457b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10004501(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_18;
  int local_14;
  
  if (param_1 < 3) {
    iVar3 = (&DAT_1005977c)[param_1];
    DAT_10059788 = param_1;
    if (iVar3 == 0) {
      puVar9 = &local_18;
      local_18 = 0x14;
      iVar4 = iVar3;
      iVar5 = param_1;
      uVar8 = DAT_10059768;
      uVar6 = DAT_1005976c;
      iVar7 = DAT_10059764;
      puVar2 = FUN_10012ab2();
      bVar1 = FUN_10013ac7(puVar2,iVar4,iVar5,uVar8,uVar6,iVar7,puVar9);
      if ((CONCAT31(extraout_var,bVar1) != 0) &&
         ((&DAT_1005977c)[param_1] = local_14, iVar3 = local_14, DAT_10059790 == '\0')) {
        uVar8 = 0;
        puVar2 = FUN_10012ab2();
        FUN_10013b0b(puVar2,uVar8,param_1);
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

