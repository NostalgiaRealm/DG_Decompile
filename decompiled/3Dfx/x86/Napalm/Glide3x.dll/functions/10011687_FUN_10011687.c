/*
 * FUN_10011687 at 10011687
 * undefined4 __thiscall FUN_10011687(void * this, undefined4 param_1, int param_2, int param_3, char param_4, char param_5, char param_6, char param_7, undefined1 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 10011687-100117c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10011687(void *this,undefined4 param_1,int param_2,int param_3,char param_4,char param_5,
            char param_6,char param_7,undefined1 param_8,undefined4 param_9,undefined4 param_10)

{
  char cVar1;
  char cVar2;
  undefined1 extraout_AL;
  int iVar3;
  int iVar4;
  undefined3 uVar5;
  undefined3 extraout_var;
  undefined1 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined3 in_stack_0000001d;
  
  iVar3 = (**(code **)(*(int *)this + 0x2c))(param_1);
  iVar4 = FUN_100111a2(param_2,*(byte *)(iVar3 + 0x48));
  bVar8 = iVar4 == 0x20;
  uVar6 = 1;
  cVar2 = '\x01';
  if ((*(byte *)(iVar3 + 0x4a) & 1) != 0) {
    if ((param_2 != 0xff) &&
       (((((*(int *)(&DAT_10057b58 + param_2 * 4) != *(int *)(iVar3 + 8) &&
           (*(int *)(&DAT_10057b58 + param_2 * 4) != *(int *)(iVar3 + 0xc))) ||
          (param_3 != *(int *)(iVar3 + 0x60))) ||
         ((bVar8 != (bool)*(char *)(iVar3 + 0x7c) || (param_4 != *(char *)(iVar3 + 0x7d))))) ||
        (param_6 != '\0')))) {
      (**(code **)(*(int *)this + 0x20))(param_1,1,0);
    }
    if ((*(char *)(iVar3 + 0x7d) != '\0') && (param_7 != '\0')) {
      (**(code **)(*(int *)this + 0x20))(param_1,1,0);
    }
  }
  if ((*(byte *)(iVar3 + 0x4a) & 1) == 0) {
    puVar7 = (undefined4 *)(iVar3 + 0x84);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)(iVar3 + 0x5c) = param_2;
  *(undefined1 *)(iVar3 + 0x7f) = param_8;
  *(undefined4 *)(iVar3 + 0x74) = param_9;
  *(undefined4 *)(iVar3 + 0x78) = param_10;
  *(int *)(iVar3 + 0x60) = param_3;
  uVar5 = (undefined3)((uint)param_3 >> 8);
  *(bool *)(iVar3 + 0x7c) = bVar8;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  *(char *)(iVar3 + 0x7d) = param_4;
  *(char *)(iVar3 + 0x80) = param_6;
  cVar1 = cVar2;
  if ((param_6 != '\0') && (param_7 != '\0')) {
    cVar1 = '\0';
  }
  *(byte *)(iVar3 + 0x82) = *(byte *)(iVar3 + 0x82) & 0xfc;
  *(char *)(iVar3 + 0x7e) = cVar1;
  if ((param_6 == '\0') || (cVar1 == '\0')) {
    cVar2 = '\0';
  }
  if (param_5 == '\0') {
    if ((cVar2 != '\0') ||
       (_param_7 = CONCAT31(in_stack_0000001d,1), (*(byte *)(iVar3 + 0x4a) & 1) != 0)) {
      _param_7 = _param_7 & 0xffffff00;
    }
    (**(code **)(*(int *)this + 0x3c))(param_1,_param_7,bVar8);
    uVar5 = extraout_var;
    uVar6 = extraout_AL;
  }
  return CONCAT31(uVar5,uVar6);
}

