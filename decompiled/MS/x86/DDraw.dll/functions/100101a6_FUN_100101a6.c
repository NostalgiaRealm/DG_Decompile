/*
 * FUN_100101a6 at 100101a6
 * int __stdcall FUN_100101a6(int param_1, int param_2, int param_3, int param_4, RECT * param_5)
 * Address ranges: 100101a6-1001038b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100101a6(int param_1,int param_2,int param_3,int param_4,RECT *param_5)

{
  char cVar1;
  char cVar2;
  uint xRight;
  uint yBottom;
  int iVar3;
  undefined1 uVar4;
  char extraout_DL;
  undefined1 local_b0 [56];
  undefined4 local_78 [4];
  uint local_68;
  uint local_60;
  undefined2 local_5a;
  int local_58;
  RECT local_3c;
  uint local_2c [2];
  int local_24;
  tagRECT local_20;
  undefined1 local_10;
  undefined3 uStack_f;
  void *local_c;
  
  (**(code **)(**(int **)(param_2 + 0xc) + 0x28))(*(int **)(param_2 + 0xc),local_78);
  local_68 = local_68 >> ((byte)param_3 & 0x1f);
  local_3c.left = 0;
  local_3c.top = 0;
  xRight = 1;
  if (local_68 != 0) {
    xRight = local_68;
  }
  local_60 = local_60 >> ((byte)param_3 & 0x1f);
  yBottom = 1;
  if (local_60 != 0) {
    yBottom = local_60;
  }
  local_3c.right = xRight;
  local_3c.bottom = yBottom;
  IntersectRect(&local_20,param_5,&local_3c);
  cVar1 = FUN_10006992(*(int *)(param_1 + 0x34));
  if ((cVar1 == '\0') ||
     (*(char *)(*(int *)((int)local_c + 0x14) * 0x18 + 0x532 + *(int *)((int)local_c + 0xcf00)) !=
      '\0')) {
    xRight = FUN_1001faf2(xRight);
    yBottom = FUN_1001faf2(yBottom);
  }
  else {
    SetRect(&local_20,0,0,xRight,yBottom);
  }
  local_58 = *(int *)(param_2 + 0x2c);
  local_5a = 1;
  FUN_10012c66((void *)((int)local_c + 0xd064),local_2c,local_78);
  iVar3 = 0;
  if (local_2c[0] != 0) {
    if ((((local_20.left == 0) && (local_20.top == 0)) && (local_20.right == xRight)) &&
       (local_20.bottom == yBottom)) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    if (((*(int *)(param_1 + 0x20) == 1) && (*(int *)(param_1 + 0x24) == 1)) && (cVar1 != '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    _local_10 = CONCAT31(uStack_f,uVar4);
    cVar2 = FUN_10006992(*(int *)(param_1 + 0x34));
    if (((cVar2 != '\0') && (extraout_DL == '\0')) &&
       (((&DAT_10062a58)[*(int *)(param_1 + 0x1c)] != '\0' &&
        ((local_58 == 0x2c || (local_58 == 0x2d)))))) {
      FUN_1001283a(local_c,param_2,local_24,*(uint *)(param_2 + 0xc),local_2c[0],xRight,yBottom,
                   (*(int *)(param_1 + 0x24) + param_4) * *(int *)(param_1 + 0x2c) + param_3,xRight,
                   yBottom,1,local_58,local_58,0,local_20.left,local_20.top,&local_20.left,1,1,'\0',
                   '\0');
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    (**(code **)(**(int **)(local_24 + 0xc) + 0x28))(*(int **)(local_24 + 0xc),local_b0);
    FUN_1001283a(local_c,param_2,local_24,*(uint *)(param_2 + 0xc),local_2c[0],xRight,yBottom,
                 iVar3 * param_4 + param_3,xRight,yBottom,0,local_58,local_58,0,local_20.left,
                 local_20.top,&local_20.left,1,1,(char)_local_10,cVar1);
    iVar3 = local_24;
  }
  return iVar3;
}

