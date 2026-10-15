/*
 * FUN_10078060 at 10078060
 * undefined __thiscall FUN_10078060(void * this, int * param_1)
 * Address ranges: 10078060-1007813f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10078060(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_ECX_01;
  int extraout_EDX;
  undefined4 unaff_EBX;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [84];
  
  if (((char)param_1[9] != '\0') && (*(char *)((int)param_1 + 0x25) == '\0')) {
    (**(code **)(*(int *)this + 0x98))();
    (**(code **)(*(int *)this + 0x48))(auStack_68,param_1[5]);
    iVar1 = *(int *)((int)this + 4);
    uVar10 = *(undefined4 *)(iVar1 + 0xde);
    uVar5 = *(int *)(iVar1 + 0x18) == 1;
    uVar9 = *(undefined4 *)(iVar1 + 0xda);
    uVar7 = *(undefined1 *)(iVar1 + 0x26);
    uVar2 = (uint)(param_1[3] == 1);
    uVar6 = *(undefined4 *)(&DAT_100b0c74 + *(int *)(iVar1 + 0xce) * 4);
    uVar8 = extraout_ECX;
    uVar3 = FUN_10078140(param_1[2]);
    FUN_100659f5(auStack_58,this,*(undefined4 *)((int)this + 0x14),*(undefined4 *)*param_1,unaff_EBX
                 ,uStack_6c,param_1[7],param_1[8],uStack_60,1,
                 *(undefined4 *)(&DAT_100b0c88 + *(int *)(extraout_EDX + 0x1c) * 4),extraout_ECX_00,
                 uVar3,uVar6,uVar2,uVar7,uVar5,uVar8,uVar9,uVar10);
    piVar4 = FUN_10096048(*(void **)((int)this + 0x10),extraout_ECX_01);
    if (piVar4 != (int *)0x0) {
      FUN_10077fdb(this,param_1);
      *param_1 = (int)piVar4;
      *(undefined1 *)((int)param_1 + 0x25) = 1;
      FUN_10096631(*(void **)((int)this + 0x10),*piVar4,0);
    }
  }
  return;
}

