/*
 * FUN_1000dc6e at 1000dc6e
 * undefined __fastcall FUN_1000dc6e(void * param_1)
 * Address ranges: 1000dc6e-1000ddc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000dc6e(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_ESI;
  uint unaff_EDI;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined1 local_40c [1032];
  
  if (*(int *)((int)param_1 + 0x44) != 0) {
    local_414 = 0;
    local_418 = 0;
    local_410 = 0;
    iVar2 = (**(code **)((int)param_1 + 0x50))(&local_414,&local_418,&local_410,local_40c);
    if (iVar2 != 0) {
      FUN_1000621f(param_1,&local_418);
      FUN_10006a3d(param_1,3,8,1,1,0);
      FUN_1000694c(param_1,3,8,1,1,0);
      FUN_1000679f(param_1,1,5,4,0);
      FUN_10006718(param_1,0);
      FUN_10006870(param_1,7);
      FUN_10006c8f(param_1,0);
      FUN_10006b2e(param_1,1,0);
      FUN_10006b94(param_1,2);
      FUN_10006900(param_1,0);
      FUN_100068b9(param_1,1);
      FUN_1000657d(param_1,0);
      FUN_10006542(param_1,0x40);
      FUN_10004d8b(param_1,7);
      FUN_1000defe(param_1,0xff);
      FUN_10006bd5(param_1,0,0,*(int *)(*(int *)((int)param_1 + 0xc) + 0x98),
                   *(int *)(*(int *)((int)param_1 + 0xc) + 0x9c));
      iVar1 = *(int *)((int)param_1 + 0xc);
      uVar4 = *(int *)(iVar1 + 0x9c) - unaff_EDI;
      uVar3 = *(int *)(iVar1 + 0x98) - unaff_ESI;
      if ((int)uVar4 < 1) {
        uVar4 = 0;
      }
      if ((int)uVar3 < 1) {
        uVar3 = 0;
      }
      FUN_100065bb(param_1,(uint)*(byte *)(iVar1 + 0xe4),uVar3,uVar4,uStack_41c,unaff_ESI,unaff_EDI,
                   unaff_EBX,iVar2,1,1);
      FUN_10006279(param_1,&local_418,'\0');
    }
  }
  return;
}

