/*
 * FUN_10078bc0 at 10078bc0
 * undefined1 __thiscall FUN_10078bc0(void * this, int param_1, undefined4 * param_2, char param_3)
 * Address ranges: 10078bc0-10078cad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10078bc0(void *this,int param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_ECX_01;
  int extraout_EDX;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_51;
  undefined1 local_50 [76];
  
  local_51 = 0;
  piVar2 = FUN_10077f60(this,param_1);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)((int)this + 4);
    uVar11 = *(undefined4 *)(iVar1 + 0xde);
    uVar6 = *(int *)(iVar1 + 0x18) == 1;
    uVar10 = *(undefined4 *)(iVar1 + 0xda);
    uVar8 = *(undefined1 *)(iVar1 + 0x26);
    uVar3 = (uint)(piVar2[3] == 1);
    uVar7 = *(undefined4 *)(&DAT_100b0c74 + *(int *)(iVar1 + 0xce) * 4);
    uVar9 = extraout_ECX;
    uVar4 = FUN_10078140(piVar2[2]);
    FUN_100659f5(local_50,this,*(undefined4 *)((int)this + 0x14),param_1,*param_2,param_2[1],
                 piVar2[7],piVar2[8],param_2[2],param_2[3],
                 *(undefined4 *)(&DAT_100b0c88 + *(int *)(extraout_EDX + 0x1c) * 4),extraout_ECX_00,
                 uVar4,uVar7,uVar3,uVar8,uVar6,uVar9,uVar10,uVar11);
    piVar5 = FUN_10096048(*(void **)((int)this + 0x10),extraout_ECX_01);
    if (piVar5 != (int *)0x0) {
      *piVar2 = (int)piVar5;
      FUN_10096631(*(void **)((int)this + 0x10),*piVar5,0);
      FUN_10077f98(this,piVar2[5],(int)piVar5);
      if (param_3 == '\0') {
        FUN_10077fdb(this,piVar2);
      }
      FUN_10078023(this,piVar2[5],(int)piVar5);
      *(undefined1 *)((int)piVar2 + 0x25) = 1;
      local_51 = 1;
    }
  }
  return local_51;
}

